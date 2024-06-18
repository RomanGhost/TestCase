{
  "targets": [
    {
      "target_name": "privilege_checker",
      "sources": ["cpp-addon/privilege_checker.cpp"],
      "include_dirs": [
        "<!(node -p \"require('node-addon-api').include\")"
      ],
      "dependencies": [
        "<!(node -p \"require('node-addon-api').gyp\")"
      ],
      "defines": ["NAPI_CPP_EXCEPTIONS"]
    }
  ]
}
