#include "tpt_helper.h"

void tpt_helper::setup(){
	ofSetBackgroundColor(25,200,10);

}

void tpt_helper::dragEvent(ofDragInfo dragInfo){ 
    vector<std::string> files = dragInfo.files;
    for(int x =0; x < files.size();x ++)
    {
        std::string filePath = files[x];
        printf("Processing %s\n", filePath.c_str());
        
        ofFile f = ofFile(filePath);
        
        std::string ext = f.getExtension().c_str();
        printf("Detecting %s extension.\n", f.getExtension().c_str());

        if(ext == "mid"){
            midiFile = smf::MidiFile(filePath);
            printf("Loaded %i MIDI tracks.\n",midiFile.getTrackCount());
            

        }
    }
}

void tpt_helper::parseMidiFile(std::<#string filename#>)
{
    
}

void tpt_helper::update(){

}

void tpt_helper::draw(){

}

void tpt_helper::keyPressed(int key){

}

void tpt_helper::keyReleased(int key){

}

void tpt_helper::mouseMoved(int x, int y ){

}

void tpt_helper::mouseDragged(int x, int y, int button){

}

void tpt_helper::mousePressed(int x, int y, int button){

}

void tpt_helper::mouseReleased(int x, int y, int button){

}

void tpt_helper::mouseEntered(int x, int y){

}

void tpt_helper::mouseExited(int x, int y){

}

void tpt_helper::windowResized(int w, int h){

}

void tpt_helper::gotMessage(ofMessage msg){

}
