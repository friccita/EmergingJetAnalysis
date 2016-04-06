#ifndef EmergingJetAnalysis_EmergingJetAnalyzer_OutputTree_h
#define EmergingJetAnalysis_EmergingJetAnalyzer_OutputTree_h

#include <vector>

#include "TTree.h"

using std::vector;

namespace emjet
{
  class OutputTree {
  public:
    OutputTree() { Init(); }
    void Init();

    void Branch(TTree* tree);

    // Generated by cog
    // Do NOT edit until "end"
    //[[[cog
    //import cog
    //import emjet_event_code as mod; mod.genOutputTree()
    //]]]
    int                      run                           ;
    int                      lumi                          ;
    int                      event                         ;
    int                      bx                            ;
    int                      nVtx                          ;
    int                      nGoodVtx                      ;
    int                      nTrueInt                      ;
    float                    met_pt                        ;
    float                    met_phi                       ;
    vector<int>              jet_index                 ;
    vector<int>              jet_source                ;
    vector<float>            jet_pt                    ;
    vector<float>            jet_eta                   ;
    vector<float>            jet_phi                   ;
    vector<float>            jet_cef                   ;
    vector<float>            jet_nef                   ;
    vector<float>            jet_chf                   ;
    vector<float>            jet_nhf                   ;
    vector<float>            jet_phf                   ;
    vector<int>              jet_nPromptTracks         ;
    vector<int>              jet_nDispTracks           ;
    vector<int>              jet_nSV                   ;
    vector<float>            jet_medianLogIpSig        ;
    vector<int>              jet_missHits              ;
    vector<int>              jet_muonHits              ;
    vector<float>            jet_alphaMax              ;
    vector<int>              jet_nDarkPions            ;
    vector<float>            jet_minDRDarkPion         ;
    vector< vector<int> >    track_index               ;
    vector< vector<int> >    track_source              ;
    vector< vector<float> >  track_pt                  ;
    vector< vector<float> >  track_eta                 ;
    vector< vector<float> >  track_phi                 ;
    vector< vector<float> >  track_pca_r               ;
    vector< vector<float> >  track_pca_eta             ;
    vector< vector<float> >  track_pca_phi             ;
    vector< vector<int> >    track_algo                ;
    vector< vector<int> >    track_originalAlgo        ;
    vector< vector<int> >    track_nHits               ;
    vector< vector<int> >    track_nMissInnerHits      ;
    vector< vector<int> >    track_nTrkLayers          ;
    vector< vector<int> >    track_nMissInnerTrkLayers ;
    vector< vector<int> >    track_nMissOuterTrkLayers ;
    vector< vector<int> >    track_nMissTrkLayers      ;
    vector< vector<int> >    track_nPxlLayers          ;
    vector< vector<int> >    track_nMissInnerPxlLayers ;
    vector< vector<int> >    track_nMissOuterPxlLayers ;
    vector< vector<int> >    track_nMissPxlLayers      ;
    vector< vector<float> >  track_ipXY                ;
    vector< vector<float> >  track_ipZ                 ;
    vector< vector<float> >  track_ipXYSig             ;
    vector< vector<float> >  track_dRToJetAxis         ;
    vector< vector<float> >  track_distanceToJet       ;
    vector< vector<float> >  track_vertexLxy           ;
    vector< vector<int> >    vertex_index              ;
    vector< vector<int> >    vertex_source             ;
    vector< vector<float> >  vertex_x                  ;
    vector< vector<float> >  vertex_y                  ;
    vector< vector<float> >  vertex_z                  ;
    vector< vector<float> >  vertex_xError             ;
    vector< vector<float> >  vertex_yError             ;
    vector< vector<float> >  vertex_zError             ;
    vector< vector<float> >  vertex_deltaR             ;
    vector< vector<float> >  vertex_Lxy                ;
    vector< vector<float> >  vertex_mass               ;
    vector< vector<float> >  vertex_chi2               ;
    vector< vector<float> >  vertex_ndof               ;
    vector< vector<float> >  vertex_pt2sum             ;
    vector<int>              event_vertex_index                  ;
    vector<int>              event_vertex_source                 ;
    vector<float>            event_vertex_x                      ;
    vector<float>            event_vertex_y                      ;
    vector<float>            event_vertex_z                      ;
    vector<float>            event_vertex_xError                 ;
    vector<float>            event_vertex_yError                 ;
    vector<float>            event_vertex_zError                 ;
    vector<float>            event_vertex_Lxy                    ;
    vector<float>            event_vertex_mass                   ;
    vector<float>            event_vertex_chi2                   ;
    vector<float>            event_vertex_ndof                   ;
    vector<float>            event_vertex_pt2sum                 ;
    //[[[end]]]
  };
}

void
emjet::OutputTree::Init() {
  // Generated by cog
  // Do NOT edit until "end"
  //[[[cog
  //import cog
  //import emjet_event_code as mod; mod.genInit()
  //]]]
  run                           = -1;
  lumi                          = -1;
  event                         = -1;
  bx                            = -1;
  nVtx                          = -1;
  nGoodVtx                      = -1;
  nTrueInt                      = -1;
  met_pt                        = -1;
  met_phi                       = -1;
  jet_index                 .clear();
  jet_source                .clear();
  jet_pt                    .clear();
  jet_eta                   .clear();
  jet_phi                   .clear();
  jet_cef                   .clear();
  jet_nef                   .clear();
  jet_chf                   .clear();
  jet_nhf                   .clear();
  jet_phf                   .clear();
  jet_nPromptTracks         .clear();
  jet_nDispTracks           .clear();
  jet_nSV                   .clear();
  jet_medianLogIpSig        .clear();
  jet_missHits              .clear();
  jet_muonHits              .clear();
  jet_alphaMax              .clear();
  jet_nDarkPions            .clear();
  jet_minDRDarkPion         .clear();
  track_index               .clear();
  track_source              .clear();
  track_pt                  .clear();
  track_eta                 .clear();
  track_phi                 .clear();
  track_pca_r               .clear();
  track_pca_eta             .clear();
  track_pca_phi             .clear();
  track_algo                .clear();
  track_originalAlgo        .clear();
  track_nHits               .clear();
  track_nMissInnerHits      .clear();
  track_nTrkLayers          .clear();
  track_nMissInnerTrkLayers .clear();
  track_nMissOuterTrkLayers .clear();
  track_nMissTrkLayers      .clear();
  track_nPxlLayers          .clear();
  track_nMissInnerPxlLayers .clear();
  track_nMissOuterPxlLayers .clear();
  track_nMissPxlLayers      .clear();
  track_ipXY                .clear();
  track_ipZ                 .clear();
  track_ipXYSig             .clear();
  track_dRToJetAxis         .clear();
  track_distanceToJet       .clear();
  track_vertexLxy           .clear();
  vertex_index              .clear();
  vertex_source             .clear();
  vertex_x                  .clear();
  vertex_y                  .clear();
  vertex_z                  .clear();
  vertex_xError             .clear();
  vertex_yError             .clear();
  vertex_zError             .clear();
  vertex_deltaR             .clear();
  vertex_Lxy                .clear();
  vertex_mass               .clear();
  vertex_chi2               .clear();
  vertex_ndof               .clear();
  vertex_pt2sum             .clear();
  event_vertex_index                  .clear();
  event_vertex_source                 .clear();
  event_vertex_x                      .clear();
  event_vertex_y                      .clear();
  event_vertex_z                      .clear();
  event_vertex_xError                 .clear();
  event_vertex_yError                 .clear();
  event_vertex_zError                 .clear();
  event_vertex_Lxy                    .clear();
  event_vertex_mass                   .clear();
  event_vertex_chi2                   .clear();
  event_vertex_ndof                   .clear();
  event_vertex_pt2sum                 .clear();
  //[[[end]]]
}

void
emjet::OutputTree::Branch(TTree* tree) {
#define BRANCH(tree, branch) (tree)->Branch(#branch, &branch);
  // Generated by cog
  // Do NOT edit until "end"
  //[[[cog
  //import cog
  //import emjet_event_code as mod; mod.genBranch()
  //]]]
  BRANCH(tree, run                           );
  BRANCH(tree, lumi                          );
  BRANCH(tree, event                         );
  BRANCH(tree, bx                            );
  BRANCH(tree, nVtx                          );
  BRANCH(tree, nGoodVtx                      );
  BRANCH(tree, nTrueInt                      );
  BRANCH(tree, met_pt                        );
  BRANCH(tree, met_phi                       );
  BRANCH(tree, jet_index                 );
  BRANCH(tree, jet_source                );
  BRANCH(tree, jet_pt                    );
  BRANCH(tree, jet_eta                   );
  BRANCH(tree, jet_phi                   );
  BRANCH(tree, jet_cef                   );
  BRANCH(tree, jet_nef                   );
  BRANCH(tree, jet_chf                   );
  BRANCH(tree, jet_nhf                   );
  BRANCH(tree, jet_phf                   );
  BRANCH(tree, jet_nPromptTracks         );
  BRANCH(tree, jet_nDispTracks           );
  BRANCH(tree, jet_nSV                   );
  BRANCH(tree, jet_medianLogIpSig        );
  BRANCH(tree, jet_missHits              );
  BRANCH(tree, jet_muonHits              );
  BRANCH(tree, jet_alphaMax              );
  BRANCH(tree, jet_nDarkPions            );
  BRANCH(tree, jet_minDRDarkPion         );
  BRANCH(tree, track_index               );
  BRANCH(tree, track_source              );
  BRANCH(tree, track_pt                  );
  BRANCH(tree, track_eta                 );
  BRANCH(tree, track_phi                 );
  BRANCH(tree, track_pca_r               );
  BRANCH(tree, track_pca_eta             );
  BRANCH(tree, track_pca_phi             );
  BRANCH(tree, track_algo                );
  BRANCH(tree, track_originalAlgo        );
  BRANCH(tree, track_nHits               );
  BRANCH(tree, track_nMissInnerHits      );
  BRANCH(tree, track_nTrkLayers          );
  BRANCH(tree, track_nMissInnerTrkLayers );
  BRANCH(tree, track_nMissOuterTrkLayers );
  BRANCH(tree, track_nMissTrkLayers      );
  BRANCH(tree, track_nPxlLayers          );
  BRANCH(tree, track_nMissInnerPxlLayers );
  BRANCH(tree, track_nMissOuterPxlLayers );
  BRANCH(tree, track_nMissPxlLayers      );
  BRANCH(tree, track_ipXY                );
  BRANCH(tree, track_ipZ                 );
  BRANCH(tree, track_ipXYSig             );
  BRANCH(tree, track_dRToJetAxis         );
  BRANCH(tree, track_distanceToJet       );
  BRANCH(tree, track_vertexLxy           );
  BRANCH(tree, vertex_index              );
  BRANCH(tree, vertex_source             );
  BRANCH(tree, vertex_x                  );
  BRANCH(tree, vertex_y                  );
  BRANCH(tree, vertex_z                  );
  BRANCH(tree, vertex_xError             );
  BRANCH(tree, vertex_yError             );
  BRANCH(tree, vertex_zError             );
  BRANCH(tree, vertex_deltaR             );
  BRANCH(tree, vertex_Lxy                );
  BRANCH(tree, vertex_mass               );
  BRANCH(tree, vertex_chi2               );
  BRANCH(tree, vertex_ndof               );
  BRANCH(tree, vertex_pt2sum             );
  BRANCH(tree, event_vertex_index                  );
  BRANCH(tree, event_vertex_source                 );
  BRANCH(tree, event_vertex_x                      );
  BRANCH(tree, event_vertex_y                      );
  BRANCH(tree, event_vertex_z                      );
  BRANCH(tree, event_vertex_xError                 );
  BRANCH(tree, event_vertex_yError                 );
  BRANCH(tree, event_vertex_zError                 );
  BRANCH(tree, event_vertex_Lxy                    );
  BRANCH(tree, event_vertex_mass                   );
  BRANCH(tree, event_vertex_chi2                   );
  BRANCH(tree, event_vertex_ndof                   );
  BRANCH(tree, event_vertex_pt2sum                 );
  //[[[end]]]
}

// Insert new empty element in nested vector and returns pointer to the added element
template <typename T>
vector<T>&
make_new_element (vector< vector<T> > & vec) {
  vec.push_back( vector<T>() );
  return vec.back();
}


#endif
