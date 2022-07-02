// Copyright Epic Games, Inc. All Rights Reserved.

#include "CommonGenericInputActionDataTableFactory.h"
#include "Input/CommonGenericInputActionDataTable.h"

UCommonGenericInputActionDataTableFactory::UCommonGenericInputActionDataTableFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCommonGenericInputActionDataTable::StaticClass();
}

UObject* UCommonGenericInputActionDataTableFactory::FactoryCreateNew(UClass* Class, UObject* Parent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	check(Class && Class->IsChildOf(UCommonGenericInputActionDataTable::StaticClass()));
	return NewObject<UCommonGenericInputActionDataTable>(Parent, Class, Name, Flags);
}
