##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=lab5
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/think/Desktop/U of T/ECE244H1 F PROGRAMMING FUNDAMENTALS/labs/lab5/lab5_release/lab5"
ProjectPath            :="C:/Users/think/Desktop/U of T/ECE244H1 F PROGRAMMING FUNDAMENTALS/labs/lab5/lab5_release/lab5/.codelite/lab5"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=think
Date                   :=28/11/2018
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="lab5.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/TreeDB.cpp$(ObjectSuffix) $(IntermediateDirectory)/DBentry.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix): TreeNode.cpp $(IntermediateDirectory)/TreeNode.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/think/Desktop/U of T/ECE244H1 F PROGRAMMING FUNDAMENTALS/labs/lab5/lab5_release/lab5/.codelite/lab5/TreeNode.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TreeNode.cpp$(DependSuffix): TreeNode.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TreeNode.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TreeNode.cpp$(DependSuffix) -MM TreeNode.cpp

$(IntermediateDirectory)/TreeNode.cpp$(PreprocessSuffix): TreeNode.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TreeNode.cpp$(PreprocessSuffix) TreeNode.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/think/Desktop/U of T/ECE244H1 F PROGRAMMING FUNDAMENTALS/labs/lab5/lab5_release/lab5/.codelite/lab5/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/TreeDB.cpp$(ObjectSuffix): TreeDB.cpp $(IntermediateDirectory)/TreeDB.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/think/Desktop/U of T/ECE244H1 F PROGRAMMING FUNDAMENTALS/labs/lab5/lab5_release/lab5/.codelite/lab5/TreeDB.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TreeDB.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TreeDB.cpp$(DependSuffix): TreeDB.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TreeDB.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TreeDB.cpp$(DependSuffix) -MM TreeDB.cpp

$(IntermediateDirectory)/TreeDB.cpp$(PreprocessSuffix): TreeDB.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TreeDB.cpp$(PreprocessSuffix) TreeDB.cpp

$(IntermediateDirectory)/DBentry.cpp$(ObjectSuffix): DBentry.cpp $(IntermediateDirectory)/DBentry.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/think/Desktop/U of T/ECE244H1 F PROGRAMMING FUNDAMENTALS/labs/lab5/lab5_release/lab5/.codelite/lab5/DBentry.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DBentry.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DBentry.cpp$(DependSuffix): DBentry.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DBentry.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DBentry.cpp$(DependSuffix) -MM DBentry.cpp

$(IntermediateDirectory)/DBentry.cpp$(PreprocessSuffix): DBentry.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DBentry.cpp$(PreprocessSuffix) DBentry.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


