-- premake5.lua
workspace "Elau"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "Elau"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

include "Core/Build-Core.lua"
include "Elau/Build-Elau.lua"
