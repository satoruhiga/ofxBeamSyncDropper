#include "ofMain.h"

#include "ofxBeamSyncDropper.h"

class ofApp : public ofBaseApp
{
public:
	void setup()
	{
		ofSetFrameRate(0);
		ofSetVerticalSync(false);
		ofBackground(0);
	}
	
	void update()
	{
	}
	
	void draw()
	{
		stringstream ss;
		ss << ofToString(ofGetFrameRate(), 1) << endl;
		ss << (ofxBeamSyncDropper::isEnabled() ? "enable" : "disable");
		ofDrawBitmapString(ss.str(), 10, 20);
	}

	void keyPressed(int key)
	{
		if (key == '1') ofxBeamSyncDropper::enable();
		if (key == '2') ofxBeamSyncDropper::disable();
		if (key == 'f') ofToggleFullscreen();
	}

	void keyReleased(int key)
	{
	}
	
	void mouseMoved(int x, int y)
	{
	}

	void mouseDragged(int x, int y, int button)
	{
	}

	void mousePressed(int x, int y, int button)
	{
	}

	void mouseReleased(int x, int y, int button)
	{
	}
	
	void windowResized(int w, int h)
	{
	}
};


int main(int argc, const char** argv)
{
	ofSetupOpenGL(1280, 720, OF_WINDOW);
	ofRunApp(new ofApp);
	return 0;
}
