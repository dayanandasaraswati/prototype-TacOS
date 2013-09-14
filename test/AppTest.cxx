#define BOOST_TEST_MODULE App Class Test 

#include <boost/test/unit_test.hpp>
#include "AppStore.hxx"
#include "App.hxx"

BOOST_AUTO_TEST_CASE(play_music) 
{
    AppHandle music = AppStore.makeApp("music");
    string filename = "ringtone.wav";
    bool success;
    
    // Music should be played successfully
    success = music.play(filename);
    BOOST_CHECK_EQUAL(success, true);

    AppStore.returnApp(music);
}

BOOST_AUTO_TEST_CASE(visit_webpage)
{

    AppHandle browser = AppStore.makeApp("browser");

    AppStore.returnApp(browser);

}
