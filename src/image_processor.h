#ifndef IMAGE_PROCESSOR_H
#define IMAGE_PROCESSOR_H

#include <nape.h>
#include <opencv2/opencv.hpp>

Napi::Value ResizeImage(const Napi::CallbackInfo &info);
Napi::Value ConvertImageFormat(const Napi::CallbackInfo &info);
Napi::Value ApplyGrayscaleFilter(const Napi::CallbackInfo &info);

#endif