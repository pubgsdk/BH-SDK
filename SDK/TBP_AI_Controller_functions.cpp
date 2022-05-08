// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_Controller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AI_Controller.TBP_AI_Controller_C.DebugStimulus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAIStimulus             Stimulus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ATBP_AI_Controller_C::DebugStimulus(const struct FAIStimulus& Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.DebugStimulus"));

	struct
	{
		struct FAIStimulus             Stimulus;
	} params = {};

	params.Stimulus = Stimulus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.HandleNonVampireStimulus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAIStimulus             Stimulus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ATBP_AI_Controller_C::HandleNonVampireStimulus(const struct FAIStimulus& Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.HandleNonVampireStimulus"));

	struct
	{
		struct FAIStimulus             Stimulus;
	} params = {};

	params.Stimulus = Stimulus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.SyncKeysFromBlackboard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AI_Controller_C::SyncKeysFromBlackboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.SyncKeysFromBlackboard"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Police
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AI_Controller_C::InitBlackBoardBB_Police()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Police"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Civilian
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AI_Controller_C::InitBlackBoardBB_Civilian()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Civilian"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Entity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AI_Controller_C::InitBlackBoardBB_Entity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Entity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerNPCType                  NPC_Type                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AI_Controller_C::InitBlackBoardValues(ETigerNPCType NPC_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardValues"));

	struct
	{
		ETigerNPCType                  NPC_Type;
	} params = {};

	params.NPC_Type = NPC_Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_AI_Controller_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FAIStimulus             Stimulus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ATBP_AI_Controller_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature"));

	struct
	{
		class AActor*                  Actor;
		struct FAIStimulus             Stimulus;
	} params = {};

	params.Actor = Actor;
	params.Stimulus = Stimulus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveAnyDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AI_Controller_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveAnyDamage"));

	struct
	{
		float                          Damage;
		class UDamageType*             DamageType;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
	} params = {};

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.SetupData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerNPCType                  InNpcType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AI_Controller_C::SetupData(ETigerNPCType InNpcType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.SetupData"));

	struct
	{
		ETigerNPCType                  InNpcType;
	} params = {};

	params.InNpcType = InNpcType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_Controller.TBP_AI_Controller_C.ExecuteUbergraph_TBP_AI_Controller
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AI_Controller_C::ExecuteUbergraph_TBP_AI_Controller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_Controller.TBP_AI_Controller_C.ExecuteUbergraph_TBP_AI_Controller"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
