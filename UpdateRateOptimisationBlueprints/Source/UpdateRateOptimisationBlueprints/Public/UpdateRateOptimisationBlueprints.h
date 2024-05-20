// Copyright 2024 Matthew Lake All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FUpdateRateOptimisationBlueprintsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
