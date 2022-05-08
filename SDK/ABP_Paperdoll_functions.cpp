// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Paperdoll_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Paperdoll.ABP_Paperdoll_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_Paperdoll_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.FacialAnimations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Paperdoll_C::FacialAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.FacialAnimations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.SelectAnimationSets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerAnimationSetCollection* Set_Collection                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Paperdoll_C::SelectAnimationSets(class UTigerAnimationSetCollection* Set_Collection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.SelectAnimationSets"));

	struct
	{
		class UTigerAnimationSetCollection* Set_Collection;
	} params = {};

	params.Set_Collection = Set_Collection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2
// (FUNC_BlueprintEvent)

void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_E582EC97449B0B37ADC0ACA05429B4C2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705
// (FUNC_BlueprintEvent)

void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_BB1D1FF74A496723387A3B8DBAADF705"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F
// (FUNC_BlueprintEvent)

void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_C42E041348A26E837E668D9F9E6B722F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3
// (FUNC_BlueprintEvent)

void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_F6119FB64030A2FB3C6041B9E77579B3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191
// (FUNC_BlueprintEvent)

void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_TigerAnimGraphNode_RandomPlayer_A8C728FF47A5802CD0C3EAB638BED191"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107
// (FUNC_BlueprintEvent)

void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_CE1E43BE48777820551A1A88BB0B3107"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_0C84F26241DF23504C8DBF9B4E6ED9D6
// (FUNC_BlueprintEvent)

void UABP_Paperdoll_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_0C84F26241DF23504C8DBF9B4E6ED9D6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Paperdoll_AnimGraphNode_SequencePlayer_0C84F26241DF23504C8DBF9B4E6ED9D6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.AddSets
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerAnimationSetCollection* SetCollection                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Paperdoll_C::AddSets(class UTigerAnimationSetCollection* SetCollection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.AddSets"));

	struct
	{
		class UTigerAnimationSetCollection* SetCollection;
	} params = {};

	params.SetCollection = SetCollection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Paperdoll_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Paperdoll_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Paperdoll_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.BlueprintBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.ClearProps
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInterrupted                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UABP_Paperdoll_C::ClearProps(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.ClearProps"));

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params = {};

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Paperdoll.ABP_Paperdoll_C.ExecuteUbergraph_ABP_Paperdoll
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Paperdoll_C::ExecuteUbergraph_ABP_Paperdoll(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Paperdoll.ABP_Paperdoll_C.ExecuteUbergraph_ABP_Paperdoll"));

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
