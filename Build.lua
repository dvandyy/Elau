-- premake5.lua
workspace "Elau"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "Elau"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

outputdir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

group "Core"
   include "External.lua"
   include "Core/Build-Core.lua"
group ""
   include "Elau/Build-Elau.lua"
