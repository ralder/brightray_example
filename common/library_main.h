#ifndef BRIGHTRAY_EXAMPLE_COMMON_LIBRARY_MAIN_H_
#define BRIGHTRAY_EXAMPLE_COMMON_LIBRARY_MAIN_H_

extern "C" {

#if defined(OS_MACOSX)
__attribute__ ((visibility ("default")))
int BrightrayExampleMain(int argc, const char* argv[]);
#endif

}

#endif
