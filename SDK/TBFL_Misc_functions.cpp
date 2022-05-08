// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_Misc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_Misc.TBFL_Misc_C.CanOpenMainMenu
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bCanOpenMatchMenu              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBFL_Misc_C::CanOpenMainMenu(class UObject* __WorldContext, bool* bCanOpenMatchMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Misc.TBFL_Misc_C.CanOpenMainMenu"));

	struct
	{
		class UObject*                 __WorldContext;
		bool                           bCanOpenMatchMenu;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (bCanOpenMatchMenu != nullptr)
		*bCanOpenMatchMenu = params.bCanOpenMatchMenu;
}


// Function TBFL_Misc.TBFL_Misc_C.MoveWidgetsFromSideAngle
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWidgetDistance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InAngleDegrees                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 InTranslationWidget            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 InRotationWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 InInverseTranslationWidget     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Misc_C::MoveWidgetsFromSideAngle(float InWidgetDistance, float InAngleDegrees, class UWidget* InTranslationWidget, class UWidget* InRotationWidget, class UWidget* InInverseTranslationWidget, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Misc.TBFL_Misc_C.MoveWidgetsFromSideAngle"));

	struct
	{
		float                          InWidgetDistance;
		float                          InAngleDegrees;
		class UWidget*                 InTranslationWidget;
		class UWidget*                 InRotationWidget;
		class UWidget*                 InInverseTranslationWidget;
		class UObject*                 __WorldContext;
	} params = {};

	params.InWidgetDistance = InWidgetDistance;
	params.InAngleDegrees = InAngleDegrees;
	params.InTranslationWidget = InTranslationWidget;
	params.InRotationWidget = InRotationWidget;
	params.InInverseTranslationWidget = InInverseTranslationWidget;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TBFL_Misc.TBFL_Misc_C.ActivateClientAlarmAndReportAction
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 EventLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ActionRange                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerAIPlayerAction           InAction                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Misc_C::ActivateClientAlarmAndReportAction(class UAkAudioEvent* Event, const struct FVector& EventLocation, float ActionRange, class ATigerCharacter* Character, ETigerAIPlayerAction InAction, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Misc.TBFL_Misc_C.ActivateClientAlarmAndReportAction"));

	struct
	{
		class UAkAudioEvent*           Event;
		struct FVector                 EventLocation;
		float                          ActionRange;
		class ATigerCharacter*         Character;
		ETigerAIPlayerAction           InAction;
		class UObject*                 __WorldContext;
	} params = {};

	params.Event = Event;
	params.EventLocation = EventLocation;
	params.ActionRange = ActionRange;
	params.Character = Character;
	params.InAction = InAction;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TBFL_Misc.TBFL_Misc_C.ActivateAlarmAndReportAction
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 EventLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ActionRange                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerAIPlayerAction           InAction                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Misc_C::ActivateAlarmAndReportAction(const struct FVector& EventLocation, float ActionRange, class ATigerCharacter* Character, ETigerAIPlayerAction InAction, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Misc.TBFL_Misc_C.ActivateAlarmAndReportAction"));

	struct
	{
		struct FVector                 EventLocation;
		float                          ActionRange;
		class ATigerCharacter*         Character;
		ETigerAIPlayerAction           InAction;
		class UObject*                 __WorldContext;
	} params = {};

	params.EventLocation = EventLocation;
	params.ActionRange = ActionRange;
	params.Character = Character;
	params.InAction = InAction;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
