#include "kagami.h"

namespace Kagami {
    void screenshot(const std::string path) {
        CGImageRef screenShot = CGWindowListCreateImage(CGRectInfinite, kCGWindowListOptionOnScreenOnly, kCGNullWindowID, kCGWindowImageDefault);
        CFStringRef file = CFStringCreateWithCString(kCFAllocatorDefault, path.c_str(), kCFStringEncodingUTF8);
        CFStringRef type = CFSTR("public.png");
        CFURLRef urlRef = CFURLCreateWithFileSystemPath(kCFAllocatorDefault, file, kCFURLPOSIXPathStyle, false);
        CGImageDestinationRef idst = CGImageDestinationCreateWithURL(urlRef, type, 1, NULL);
        CGImageDestinationAddImage(idst, screenShot, NULL);
        CGImageDestinationFinalize(idst);
    }
}
