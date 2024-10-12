// Copyright 2024 Howechamaaaa. All Rights Reserved.

#include "BlueprintGASWrapperRuntime.h"


DEFINE_LOG_CATEGORY(LogBlueprintGASWrapperRuntime);

#define LOCTEXT_NAMESPACE "FFBlueprintGASWrapperRuntime"

void FBlueprintGASWrapperRuntime::StartupModule()
{
	
}

void FBlueprintGASWrapperRuntime::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlueprintGASWrapperRuntime, FBlueprintGASWrapperRuntime)