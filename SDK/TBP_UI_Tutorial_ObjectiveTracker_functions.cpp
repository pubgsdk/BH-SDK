// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Tutorial_ObjectiveTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.MoveCompletedObjectiveToBottom
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Tutorial_Objective_C* CompletedObjective             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_ObjectiveTracker_C::MoveCompletedObjectiveToBottom(class UTBP_UI_Tutorial_Objective_C* CompletedObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.MoveCompletedObjectiveToBottom"));

	struct
	{
		class UTBP_UI_Tutorial_Objective_C* CompletedObjective;
	} params = {};

	params.CompletedObjective = CompletedObjective;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.RemoveFinishedObjective
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Tutorial_Objective_C* CompletedObjective             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ObjectiveIdentifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_ObjectiveTracker_C::RemoveFinishedObjective(class UTBP_UI_Tutorial_Objective_C* CompletedObjective, const struct FName& ObjectiveIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.RemoveFinishedObjective"));

	struct
	{
		class UTBP_UI_Tutorial_Objective_C* CompletedObjective;
		struct FName                   ObjectiveIdentifier;
	} params = {};

	params.CompletedObjective = CompletedObjective;
	params.ObjectiveIdentifier = ObjectiveIdentifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.SetObjectiveAsComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ObjectiveIdentifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_ObjectiveTracker_C::SetObjectiveAsComplete(const struct FName& ObjectiveIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.SetObjectiveAsComplete"));

	struct
	{
		struct FName                   ObjectiveIdentifier;
	} params = {};

	params.ObjectiveIdentifier = ObjectiveIdentifier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.AddNewObjective
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ObjectiveIdentifier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ObjectiveText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FName                   Action_to_Embed                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   GamepadOverride_Action_to_Embed (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Has_Additional_Keyboard_Input  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKey                    Additional_Keyboard_Input      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           Has_Additional_Gamepad_Input   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKey                    Additional_Gamepad_Input       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           Override_Image                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   ImageToOverride                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Persistant_Objective           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   GamepadImageToOverride         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_ObjectiveTracker_C::AddNewObjective(const struct FName& ObjectiveIdentifier, const struct FText& ObjectiveText, const struct FName& Action_to_Embed, const struct FName& GamepadOverride_Action_to_Embed, bool Has_Additional_Keyboard_Input, const struct FKey& Additional_Keyboard_Input, bool Has_Additional_Gamepad_Input, const struct FKey& Additional_Gamepad_Input, bool Override_Image, const struct FName& ImageToOverride, bool Persistant_Objective, const struct FName& GamepadImageToOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.AddNewObjective"));

	struct
	{
		struct FName                   ObjectiveIdentifier;
		struct FText                   ObjectiveText;
		struct FName                   Action_to_Embed;
		struct FName                   GamepadOverride_Action_to_Embed;
		bool                           Has_Additional_Keyboard_Input;
		struct FKey                    Additional_Keyboard_Input;
		bool                           Has_Additional_Gamepad_Input;
		struct FKey                    Additional_Gamepad_Input;
		bool                           Override_Image;
		struct FName                   ImageToOverride;
		bool                           Persistant_Objective;
		struct FName                   GamepadImageToOverride;
	} params = {};

	params.ObjectiveIdentifier = ObjectiveIdentifier;
	params.ObjectiveText = ObjectiveText;
	params.Action_to_Embed = Action_to_Embed;
	params.GamepadOverride_Action_to_Embed = GamepadOverride_Action_to_Embed;
	params.Has_Additional_Keyboard_Input = Has_Additional_Keyboard_Input;
	params.Additional_Keyboard_Input = Additional_Keyboard_Input;
	params.Has_Additional_Gamepad_Input = Has_Additional_Gamepad_Input;
	params.Additional_Gamepad_Input = Additional_Gamepad_Input;
	params.Override_Image = Override_Image;
	params.ImageToOverride = ImageToOverride;
	params.Persistant_Objective = Persistant_Objective;
	params.GamepadImageToOverride = GamepadImageToOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.AnimateInBG
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_ObjectiveTracker_C::AnimateInBG()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.AnimateInBG"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.AnimateOutBG
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_ObjectiveTracker_C::AnimateOutBG()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.AnimateOutBG"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_ObjectiveTracker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.ExecuteUbergraph_TBP_UI_Tutorial_ObjectiveTracker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_ObjectiveTracker_C::ExecuteUbergraph_TBP_UI_Tutorial_ObjectiveTracker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.ExecuteUbergraph_TBP_UI_Tutorial_ObjectiveTracker"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.OnCheckStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Tutorial_ObjectiveTracker_C::OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_ObjectiveTracker.TBP_UI_Tutorial_ObjectiveTracker_C.OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
