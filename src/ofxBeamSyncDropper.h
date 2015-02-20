#pragma once

// more detail http://www.tonymacx86.com/customization/92201-beamsyncdropper-tool-disable-beamsync-permanently.html

struct ofxBeamSyncDropper {
	static void enable();
	static void disable();
	static bool isEnabled();
};
