// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Police_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Police.ABP_Police_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_Police_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.AnimGraph"));

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


// Function ABP_Police.ABP_Police_C.HandleFootstepAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FootstepDuration               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsLeftFoot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UABP_Police_C::HandleFootstepAudio(float FootstepDuration, bool IsLeftFoot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.HandleFootstepAudio"));

	struct
	{
		float                          FootstepDuration;
		bool                           IsLeftFoot;
	} params = {};

	params.FootstepDuration = FootstepDuration;
	params.IsLeftFoot = IsLeftFoot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.Map Circle to Square
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVec                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Police_C::Map_Circle_to_Square(const struct FVector& InVec, struct FVector* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.Map Circle to Square"));

	struct
	{
		struct FVector                 InVec;
		struct FVector                 Output;
	} params = {};

	params.InVec = InVec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function ABP_Police.ABP_Police_C.HandleStateChangeReaction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerAIMasqueradeState        OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerAIMasqueradeState        NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Police_C::HandleStateChangeReaction(ETigerAIMasqueradeState OldState, ETigerAIMasqueradeState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.HandleStateChangeReaction"));

	struct
	{
		ETigerAIMasqueradeState        OldState;
		ETigerAIMasqueradeState        NewState;
	} params = {};

	params.OldState = OldState;
	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.CanReact
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerNpcReactionEvent  ReactionEvent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UABP_Police_C::CanReact(const struct FTigerNpcReactionEvent& ReactionEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.CanReact"));

	struct
	{
		struct FTigerNpcReactionEvent  ReactionEvent;
		bool                           ReturnValue;
	} params = {};

	params.ReactionEvent = ReactionEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ABP_Police.ABP_Police_C.HandleReaction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerNpcReactionEvent  ReactionData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UABP_Police_C::HandleReaction(const struct FTigerNpcReactionEvent& ReactionData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.HandleReaction"));

	struct
	{
		struct FTigerNpcReactionEvent  ReactionData;
	} params = {};

	params.ReactionData = ReactionData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.Can Jump
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Should_Jump                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bJumping                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UABP_Police_C::Can_Jump(bool Should_Jump, bool* bJumping)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.Can Jump"));

	struct
	{
		bool                           Should_Jump;
		bool                           bJumping;
	} params = {};

	params.Should_Jump = Should_Jump;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bJumping != nullptr)
		*bJumping = params.bJumping;
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_EC5EF6D14BF776AA1259E28DD5F7A44B
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_EC5EF6D14BF776AA1259E28DD5F7A44B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_EC5EF6D14BF776AA1259E28DD5F7A44B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_EA62445D46638DCD18559EA8B623D728
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_EA62445D46638DCD18559EA8B623D728()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_EA62445D46638DCD18559EA8B623D728"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_B44A0BE446B2CACC4F13BE9E255CB164
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_B44A0BE446B2CACC4F13BE9E255CB164()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_B44A0BE446B2CACC4F13BE9E255CB164"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_B36FC9EA4F24F32AE32E918EBF128D95
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_B36FC9EA4F24F32AE32E918EBF128D95()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_B36FC9EA4F24F32AE32E918EBF128D95"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1D55766C44E28FFB28F77A8929446934
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1D55766C44E28FFB28F77A8929446934()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1D55766C44E28FFB28F77A8929446934"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_FF27E0A046B50C91191E7B9E521D2CA8
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_FF27E0A046B50C91191E7B9E521D2CA8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_FF27E0A046B50C91191E7B9E521D2CA8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_SequencePlayer_D28D7C2D444FCB4100FCE1832C50E560
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_SequencePlayer_D28D7C2D444FCB4100FCE1832C50E560()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_SequencePlayer_D28D7C2D444FCB4100FCE1832C50E560"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_SequencePlayer_841A7CEC4F260CC60EB1DE81030C024F
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_SequencePlayer_841A7CEC4F260CC60EB1DE81030C024F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_SequencePlayer_841A7CEC4F260CC60EB1DE81030C024F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_AEA66D0E4D466A75F6C139B6B0F95A91
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_AEA66D0E4D466A75F6C139B6B0F95A91()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_AEA66D0E4D466A75F6C139B6B0F95A91"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_A18C32184245A71D862594BE288B2F46
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_A18C32184245A71D862594BE288B2F46()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_A18C32184245A71D862594BE288B2F46"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F4893EEA48157BB1635FC89445ECB7F5
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F4893EEA48157BB1635FC89445ECB7F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F4893EEA48157BB1635FC89445ECB7F5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F83374FE458C0BB71F28C4B599AB6484
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F83374FE458C0BB71F28C4B599AB6484()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F83374FE458C0BB71F28C4B599AB6484"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_RotateRootBone_8503099343A57E5A25BB97BBC81587B6
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_RotateRootBone_8503099343A57E5A25BB97BBC81587B6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_RotateRootBone_8503099343A57E5A25BB97BBC81587B6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_FED0D5E543E4A1C9F65122873FD89A66
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_FED0D5E543E4A1C9F65122873FD89A66()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_FED0D5E543E4A1C9F65122873FD89A66"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_CDB451B348152D9B320D629BA6D11039
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_CDB451B348152D9B320D629BA6D11039()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_CDB451B348152D9B320D629BA6D11039"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_6114EB14452AB8D31077C992A2451E21
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_6114EB14452AB8D31077C992A2451E21()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_6114EB14452AB8D31077C992A2451E21"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_E864D3EF4DB977D3C6FEA69171CEBC95
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_E864D3EF4DB977D3C6FEA69171CEBC95()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_E864D3EF4DB977D3C6FEA69171CEBC95"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F5F1B2F84B837D046781D8956621052E
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F5F1B2F84B837D046781D8956621052E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F5F1B2F84B837D046781D8956621052E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1DB26E1A4136BF76554013B48D484633
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1DB26E1A4136BF76554013B48D484633()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1DB26E1A4136BF76554013B48D484633"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_75FD4E7849D60407D1D616AA1E4BAF11
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_75FD4E7849D60407D1D616AA1E4BAF11()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_75FD4E7849D60407D1D616AA1E4BAF11"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_74B6CF154A550FA170784EB96D20A093
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_74B6CF154A550FA170784EB96D20A093()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_74B6CF154A550FA170784EB96D20A093"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_2EC250834B357B106692DAA9AC7C8A5C
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_2EC250834B357B106692DAA9AC7C8A5C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_2EC250834B357B106692DAA9AC7C8A5C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.OnNpcReactionEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerNpcReactionEvent  ReactionEvent                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UABP_Police_C::OnNpcReactionEvent(const struct FTigerNpcReactionEvent& ReactionEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.OnNpcReactionEvent"));

	struct
	{
		struct FTigerNpcReactionEvent  ReactionEvent;
	} params = {};

	params.ReactionEvent = ReactionEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.OnAnimationModeChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerAIAnimationMode          LastAnimationMode              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Police_C::OnAnimationModeChanged(ETigerAIAnimationMode LastAnimationMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.OnAnimationModeChanged"));

	struct
	{
		ETigerAIAnimationMode          LastAnimationMode;
	} params = {};

	params.LastAnimationMode = LastAnimationMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.OnNpcThreatStateChangedEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerAIMasqueradeState        OldThreatState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerAIMasqueradeState        NewThreatState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Police_C::OnNpcThreatStateChangedEvent(ETigerAIMasqueradeState OldThreatState, ETigerAIMasqueradeState NewThreatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.OnNpcThreatStateChangedEvent"));

	struct
	{
		ETigerAIMasqueradeState        OldThreatState;
		ETigerAIMasqueradeState        NewThreatState;
	} params = {};

	params.OldThreatState = OldThreatState;
	params.NewThreatState = NewThreatState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Police_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.BlueprintUpdateAnimation"));

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


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_8503F7B641F81AD57A8E029C089ED956
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_8503F7B641F81AD57A8E029C089ED956()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_8503F7B641F81AD57A8E029C089ED956"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.OnEntityEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerEntityEvent              EntityEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Police_C::OnEntityEvent(ETigerEntityEvent EntityEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.OnEntityEvent"));

	struct
	{
		ETigerEntityEvent              EntityEvent;
	} params = {};

	params.EntityEvent = EntityEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.OnFootstep
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsLeftFoot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          FootstepDuration               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Police_C::OnFootstep(bool bIsLeftFoot, float FootstepDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.OnFootstep"));

	struct
	{
		bool                           bIsLeftFoot;
		float                          FootstepDuration;
	} params = {};

	params.bIsLeftFoot = bIsLeftFoot;
	params.FootstepDuration = FootstepDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_DA5442FE42F4C564170B91AD76CB82AC
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_DA5442FE42F4C564170B91AD76CB82AC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_DA5442FE42F4C564170B91AD76CB82AC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_C1276B2E42B8AB14B62C9CA500949AD4
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_C1276B2E42B8AB14B62C9CA500949AD4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_C1276B2E42B8AB14B62C9CA500949AD4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F7A8CC2F42168D0B09EAFDA70CED7282
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F7A8CC2F42168D0B09EAFDA70CED7282()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_F7A8CC2F42168D0B09EAFDA70CED7282"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1EAD016248FFBD7F5EE82491EEA532DB
// (FUNC_BlueprintEvent)

void UABP_Police_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1EAD016248FFBD7F5EE82491EEA532DB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Police_AnimGraphNode_TransitionResult_1EAD016248FFBD7F5EE82491EEA532DB"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.AnimNotify_HideMagazine1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Police_C::AnimNotify_HideMagazine1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.AnimNotify_HideMagazine1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.AnimNotify_HideMagazine2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Police_C::AnimNotify_HideMagazine2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.AnimNotify_HideMagazine2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.AnimNotify_UnHideMagazine1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Police_C::AnimNotify_UnHideMagazine1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.AnimNotify_UnHideMagazine1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.AnimNotify_UnHideMagazine2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Police_C::AnimNotify_UnHideMagazine2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.AnimNotify_UnHideMagazine2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.OnFiredWeapon
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInSecondaryWeaponFired        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UABP_Police_C::OnFiredWeapon(bool bInSecondaryWeaponFired)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.OnFiredWeapon"));

	struct
	{
		bool                           bInSecondaryWeaponFired;
	} params = {};

	params.bInSecondaryWeaponFired = bInSecondaryWeaponFired;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Police.ABP_Police_C.ExecuteUbergraph_ABP_Police
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Police_C::ExecuteUbergraph_ABP_Police(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Police.ABP_Police_C.ExecuteUbergraph_ABP_Police"));

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
