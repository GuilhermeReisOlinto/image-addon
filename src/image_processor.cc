#include "image_processor.h"

Napi::Value ResizeImage(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    std::string imagePath = info[0].As<Napi::String>();
    int newWidth = info[1].As<Napi::Number>();
    int newHeight = info[2].As<Napi::Number>();

    cv::Mat image = cv::imread(imagePath);
    if (image.empty())
    {
        Napi::TypeError::New(env, "Error opening image").ThrowAsJavaScriptException();
        return env.Null();
    }

    cv::resize(image, image, cv::Size(newWidth, newHeight));

    cv::imwrite(imagePath, image);

    return Napi::String::New(env, imagePath);
}

Napi::Value ConvertImageFormat(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    std::string imagePath = info[0].As<Napi::String>();
    std::string newFormat = info[1].As<Napi::String>();

    cv::Mat image = cv::imread(imagePath);
    if (image.empty())
    {
        Napi::TypeError::New(env, "Error opening image").ThrowAsJavaScriptException();
        return env.Null();
    }

    std::string outPutPath = imagePath.substr(0, imagePath.find_last_of(".")) + "." + newFormat;

    return Napi::String::New(env, newFormat);
}

Napi::Value ApplyGrayscaleFilter(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();

    std::string imagePath = info[0].As<Napi::String>();

    cv::Mat image = cv::imread(imagePath);

    if (image.empty())
    {
        Napi::TypeError::New(env, "Error opening image").ThrowAsJavaScriptException();
        return env.Null();
    }

    cv::cvtColor(image, image, cv::COLOR_BGR2GRAY);
    cv::imwrite(imagePath, image);

    return Napi::String::New(env, imagePath);
}