#ifndef EmergingJetAnalysis_EmergingJetAnalyzer_EmJetEvent_h
#define EmergingJetAnalysis_EmergingJetAnalyzer_EmJetEvent_h

// Class describing the content of output for EmergingJetAnalyzer

#include <vector>
#include <functional>
#include "EmergingJetAnalysis/EmergingJetAnalyzer/interface/OutputTree.h"
#define DEFAULTVALUE -1

using std::vector;

namespace emjet
{
  class Track;
  class Vertex;
  class Jet;
  class Event {
  public:
    Event() {
      //template_string = "VARNAME = DEFAULTVALUE;"
      run = DEFAULTVALUE;
    };
    //
    //template_string = "TYPE VARNAME;"
    int         run                        ;
    int         lumi                       ;
    int         event                      ;
    int         bx                         ;
    int         nVtx                       ;
    int         nGoodVtx                   ;
    int         nTrueInt                   ;
    float       met_pt                     ;
    float       met_phi                    ;
    vector<Jet> jet_vector;
  };
  class Jet {
  public:
    int              source                ;
    int              index                 ;
    float            pt                    ;
    float            eta                   ;
    float            phi                   ;
    float            cef                   ;
    float            nef                   ;
    float            chf                   ;
    float            nhf                   ;
    float            phf                   ;
    int              nPromptTracks         ;
    int              nDispTracks           ;
    int              nSV                   ;
    float            medianLogIpSig        ;
    int              missHits              ;
    int              muonHits              ;
    float            alphaMax              ;
    int              nDarkPions            ;
    float            minDRDarkPion         ;
    vector<Track>    track_vector;
    vector<Vertex>   vertex_vector;
  };
  class Track {
  public:
    int     index               ;
    int     source              ;
    float   pt                  ;
    float   eta                 ;
    float   phi                 ;
    float   pca_r               ;
    float   pca_eta             ;
    float   pca_phi             ;
    int     algo                ;
    int     originalAlgo        ;
    int     nHits               ;
    int     nMissInnerHits      ;
    int     nTrkLayers          ;
    int     nMissInnerTrkLayers ;
    int     nMissOuterTrkLayers ;
    int     nMissTrkLayers      ;
    int     nPxlLayers          ;
    int     nMissInnerPxlLayers ;
    int     nMissOuterPxlLayers ;
    int     nMissPxlLayers      ;
    float   ipXY                ;
    float   ipZ                 ;
    float   ipXYSig             ;
    float   dRToJetAxis         ;
    float   distanceToJet       ;
    float   vertexLxy           ;
  };
  class Vertex {
  public:
    int     index           ;
    int     source          ;
    float   x               ;
    float   y               ;
    float   z               ;
    float   xError          ;
    float   yError          ;
    float   zError          ;
    float   deltaR          ;
    float   Lxy             ;
    float   mass            ;
    float   chi2            ;
    float   ndof            ;
    float   pt2sum          ;
  };
}

// Turn vector of objects, into vector of member variable by calling func(object)
// Output is placed in provided vector reference
template <typename Object, typename T>
void
vectorize(const vector<Object>& input, std::function<T (const Object &)> func, vector<T>& output)
{
  output.clear();
  output.reserve(input.size()); // Doesn't reduce capacity
  for (const auto& obj : input) {
    output.push_back( func(obj) );
  }
}

// Version of vectorize() that returns a vector object
template <typename Object, typename T>
vector<T>
vectorize_new(const vector<Object>& input, std::function<T (const Object &)> func)
{
  vector<T> output;
  vectorize(input, func, output);
  return output;
}

using emjet::Track;
using emjet::Vertex;
using emjet::Jet;
using emjet::Event;

void
WriteEventToOutput(Event event, emjet::OutputTree* otree)
{
  otree->Init(); // Reset all values and clear all vectors
  // Event-level variables, e.g. int, float, etc.
  {
    //template_string = "otree->$name = event.$name;"
    otree->run      = event.run      ;
  }
  // Jet-level variables, e.g. vector<int>, vector<float>, etc.
  {
    //[[[cog
    //  template_string = "vectorize<Jet, $cpptype>(event.jet_vector, [](const emjet::Jet& obj ){return obj.$name;}, otree->jet_$name);"
    //  import emjet_event_code as m
    //  for var in jet_vars: m.replaceSingleLine(template_string, var)
    //]]]
    //[[[end]]
    vectorize<Jet, int>(event.jet_vector, [](const Jet& obj ){return obj.index;          }, otree->jet_index          );
  }
  // Jet-Track-level variables
  {
    for (const auto jet : event.jet_vector) {
      //template_string = "auto $name = vectorize_new<Track, $cpptype>(jet.track_vector, [](const Track& obj ){return obj.$name;}); otree->track_$name.push_back($name);"
      auto index = vectorize_new<Track, int>(jet.track_vector, [](const Track& obj ){return obj.index;}); otree->track_index.push_back(index);
    }
  }
  // Jet-Vertex-level variables
  {
    for (const auto jet : event.jet_vector) {
      //template_string = "auto $name = vectorize_new<Vertex, $cpptype>(jet.vertex_vector, [](const Vertex& obj ){return obj.$name;}); otree->vertex_$name.push_back($name);"
      auto index = vectorize_new<Vertex, int>(jet.vertex_vector, [](const Vertex& obj ){return obj.index;}); otree->vertex_index.push_back(index);
    }
  }
}

// write_jet_to_event(emjet::Jet jet, emjet::OutputTree* otree)
// {
//   otree.jet_pt.push_back(jet.pt);
//   track_pt = vectorize(jet.track_vector, auto[](auto track){return track.pt;} )
// }

#endif