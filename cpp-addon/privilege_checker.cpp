#include <napi.h>
#include <windows.h>
#include <string>

std::string CheckUserPrivilege(const std::string& username) {
  // Здесь будет код для проверки привилегий пользователя через WinAPI
  // Пока что, добавим заглушку:
  return "User " + username + " has privilege User";
}

Napi::String CheckPrivilegeWrapped(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  if (info.Length() < 1 || !info[0].IsString()) {
    Napi::TypeError::New(env, "String expected").ThrowAsJavaScriptException();
  }

  Napi::String username = info[0].As<Napi::String>();
  std::string result = CheckUserPrivilege(username.Utf8Value());

  return Napi::String::New(env, result);
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set("checkPrivilege", Napi::Function::New(env, CheckPrivilegeWrapped));
  return exports;
}

NODE_API_MODULE(privilege_checker, Init)
