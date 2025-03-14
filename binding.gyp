{
  "targets": [
    {
      "target_name": "imageaddon",
      "sources": ["src/main.cc", "src/image_processor.cc"],
      "include_dirs": [
        "<!(pkg-config --cflags-only-I opencv4 | sed 's/-I//g')",
        "src/",
        "<!@(node -p \"require('node-addon-api').include\")"
      ],
      "libraries": [
        "<!(pkg-config --libs-only-l opencv4)"
      ],
      "cflags": ["-std=c++17", "-fexceptions", "-frtti"],
      "cflags_cc": ["-std=c++17", "-fexceptions", "-frtti"],
      "defines": ["NODE_ADDON_API_CPP_EXCEPTIONS"]
    }
  ]
}
