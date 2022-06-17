#pragma once

#ifdef _WIN32
  #define qtkeychain_EXPORT __declspec(dllexport)
#else
  #define qtkeychain_EXPORT
#endif

qtkeychain_EXPORT void qtkeychain();
