#include <napi.h>
#include <image_processor.h>

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, "resizeImage"), Napi::Function::New(env, ResizeImage));
    exports.Set(Napi::String::New(env, "convertImageFormat"), Napi::Function::New(env, ConvertImageFormat));
    exports.Set(Napi::String::New(env, "applyGrayscaleFilter"), Napi::Function::New(env, ApplyGrayscaleFilter));
    return exports;
}

NODE_API_MODULE(imageaddon, Init)