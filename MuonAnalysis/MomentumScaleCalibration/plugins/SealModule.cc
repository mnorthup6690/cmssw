#include "FWCore/PluginManager/interface/ModuleDef.h"

#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/Framework/interface/LooperFactory.h"
#include "FWCore/Services/src/SiteLocalConfigService.h"
#include "FWCore/ServiceRegistry/interface/ServiceMaker.h"

// using namespace edm::serviceregistry;
#include "MuonAnalysis/MomentumScaleCalibration/plugins/MuScleFit.h"
#include "MuonAnalysis/MomentumScaleCalibration/plugins/MuScleFitFilter.h"

DEFINE_SEAL_MODULE();
DEFINE_FWK_LOOPER(MuScleFit);
DEFINE_FWK_MODULE(MuScleFitFilter);


