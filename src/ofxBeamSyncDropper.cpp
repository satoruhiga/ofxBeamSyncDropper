#include "ofxBeamSyncDropper.h"

#include "ofLog.h"

extern "C" void CGSSetDebugOptions(int);
extern "C" void CGSDeferredUpdates(int);

typedef enum {
	disableBeamSync = 0,
	automaticBeamSync = 1,
	forcedBeamSyncMode = 2
} beamSyncMode;

static beamSyncMode mode = automaticBeamSync;

void ofxBeamSyncDropper::enable()
{
	mode = automaticBeamSync;
	
	CGSSetDebugOptions(mode ? 0 : 0x08000000);
	CGSDeferredUpdates(mode);
	
	ofLog() << "BeamSync enabled";
}

void ofxBeamSyncDropper::disable()
{
	mode = disableBeamSync;
	
	CGSSetDebugOptions(mode ? 0 : 0x08000000);
	CGSDeferredUpdates(mode);
	
	ofLog() << "BeamSync disabled";
}

bool ofxBeamSyncDropper::isEnabled()
{
	return mode == automaticBeamSync;
}