#ifndef HLTForwardBackwardJetsFilter_h
#define HLTForwardBackwardJetsFilter_h

/** \class HLTForwardBackwardJetsFilter
 *
 */

#include "HLTrigger/HLTcore/interface/HLTFilter.h"

//
// class decleration
//

class HLTForwardBackwardJetsFilter : public HLTFilter {

   public:
      explicit HLTForwardBackwardJetsFilter(const edm::ParameterSet&);
      ~HLTForwardBackwardJetsFilter();
      virtual bool filter(edm::Event&, const edm::EventSetup&);

   private:
      edm::InputTag inputTag_; // input tag identifying jets
      bool saveTag_;           // whether to save this tag
      double minPt_;
      double minEta_;
      double maxEta_;
};

#endif //HLTForwardBackwardJetsFilter_h
