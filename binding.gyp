{
    "targets": [
        {
            "target_name": "imageaddon",
            "sources": [ "src/main.cc", "src/image_processor.cc" ],
            "include_dirs": [
                "<!(pkg-config --cflags opencv)",
                "src/"
            ],
            "libraries": [
                "<!(pkg-config --libs opencv)",
            "cflags": [ "-std=c++17" ],
            "cflags_cc": [ "-std=c++17" ]
    ]
}