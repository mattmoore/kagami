#include "kagami.h"

Kagami::Kagami()
{
}

void Kagami::screenshot() {
    CGImageRef screenShot = CGWindowListCreateImage(
                CGRectInfinite,
                kCGWindowListOptionOnScreenOnly,
                kCGNullWindowID,
                kCGWindowImageDefault
                );

    CFStringRef file = CFSTR("/Users/mattmoore/Desktop/lala.jpg");
    CFStringRef type = CFSTR("public.jpeg");
    //CFURLRef urlRef = CFURLCreateWithString(NULL, file, NULL);
    CFURLRef urlRef = CFURLCreateWithFileSystemPath(kCFAllocatorDefault, file, kCFURLPOSIXPathStyle, false);
    CGImageDestinationRef idst = CGImageDestinationCreateWithURL(urlRef, type, 1, NULL);
    CGImageDestinationAddImage(idst, screenShot, NULL);
    CGImageDestinationFinalize(idst);
}
