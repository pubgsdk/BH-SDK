// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ABP_Civilian_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Civilian.ABP_Civilian_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_Civilian_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.AnimGraph"));

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


// Function ABP_Civilian.ABP_Civilian_C.PostFootStepAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Civilian_C::PostFootStepAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.PostFootStepAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.AddEmotionalAnimationSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerAnimationSetCollection* InSetCollection                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Civilian_C::AddEmotionalAnimationSet(class UTigerAnimationSetCollection* InSetCollection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.AddEmotionalAnimationSet"));

	struct
	{
		class UTigerAnimationSetCollection* InSetCollection;
	} params = {};

	params.InSetCollection = InSetCollection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.Facial Animations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Civilian_C::Facial_Animations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.Facial Animations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.StopCapMontage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerAIAnimationMode          A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Civilian_C::StopCapMontage(ETigerAIAnimationMode A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.StopCapMontage"));

	struct
	{
		ETigerAIAnimationMode          A;
	} params = {};

	params.A = A;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.HandleContextualIdle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Civilian_C::HandleContextualIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.HandleContextualIdle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.HandleFootstepSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FootstepDuration               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           LeftFoot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UABP_Civilian_C::HandleFootstepSound(float FootstepDuration, bool LeftFoot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.HandleFootstepSound"));

	struct
	{
		float                          FootstepDuration;
		bool                           LeftFoot;
	} params = {};

	params.FootstepDuration = FootstepDuration;
	params.LeftFoot = LeftFoot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_BBA6A9724AFCD837302A6AB8D3D55CBB"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_CA1CB30F44EF00F966251AAA867490CA"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_BlendListByBool_A6AB795945D148CB4AEE71AC2F76A9A2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_LayeredBoneBlend_D132CB474C4CD8732517EFAF61A0670E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_TigerAnimGraphNode_RandomPlayer_AD270F954A6AC11814CAFDA6C00BC755"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_6D81CB9F40381D9D7F4CBA9295F53D55
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_6D81CB9F40381D9D7F4CBA9295F53D55()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_6D81CB9F40381D9D7F4CBA9295F53D55"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_40147EBA4EB9F87484ECD1957842F4BC
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_40147EBA4EB9F87484ECD1957842F4BC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_40147EBA4EB9F87484ECD1957842F4BC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_51FD1D124A1C5B0FA7BA3A8EFEF7A75A
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_51FD1D124A1C5B0FA7BA3A8EFEF7A75A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_51FD1D124A1C5B0FA7BA3A8EFEF7A75A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_5E451A0047DDDB557C31CCA35B78D4C7
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_5E451A0047DDDB557C31CCA35B78D4C7()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_5E451A0047DDDB557C31CCA35B78D4C7"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_9765F80E4DF706EF633C41803692F608
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_9765F80E4DF706EF633C41803692F608()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_9765F80E4DF706EF633C41803692F608"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_F0E4FE194236AF66FC2733AB7AF3FEEB
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_F0E4FE194236AF66FC2733AB7AF3FEEB()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_F0E4FE194236AF66FC2733AB7AF3FEEB"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_415DC49A4A4970B81DC471938308B791
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_415DC49A4A4970B81DC471938308B791()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_415DC49A4A4970B81DC471938308B791"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_DEB4941343244C3724C4F6A3E966FCF0
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_DEB4941343244C3724C4F6A3E966FCF0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_DEB4941343244C3724C4F6A3E966FCF0"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_DDB556484047FAEBC14C5687AA7ED506"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_FF7B69DD43977067A7C8EAA305F7DE94"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_C2A09BAA45A8969D20CC9693267BE7A9"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A689E074CAAA0BCC42C20A2E224F2E6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_3B5B01C94F495AA698FAF9BA69180E2C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_1410EC2340A6B877E3B6CFB8046D439A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_571FA2704A360D76B6518B88AB7AD669
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_571FA2704A360D76B6518B88AB7AD669()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_571FA2704A360D76B6518B88AB7AD669"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_EA3BF44A4F4A3F201C36F0888B234655
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_EA3BF44A4F4A3F201C36F0888B234655()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_EA3BF44A4F4A3F201C36F0888B234655"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_ModifyBone_8DCA473E4F0442A438726E9DC0F181A8"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_44626FDB45DD85C93968159051D3B35B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_4D238E45428FCC9B6A39B0B930AC8AA4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_8A7EC1F94AABA14079965D87190BA410"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_5E507CAD402D56D610FC95B131D51453"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_TransitionResult_F680FFE542EA01E2748D7598FBD52DE5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5500156C4CB9331DB2E91CA33F95F052
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5500156C4CB9331DB2E91CA33F95F052()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5500156C4CB9331DB2E91CA33F95F052"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_E1B0A8814539633E7C59898C4390A6CC
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_E1B0A8814539633E7C59898C4390A6CC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_E1B0A8814539633E7C59898C4390A6CC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5B33898D4651D630534E489B77F5687C
// (FUNC_BlueprintEvent)

void UABP_Civilian_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5B33898D4651D630534E489B77F5687C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Civilian_AnimGraphNode_SequencePlayer_5B33898D4651D630534E489B77F5687C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Civilian_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.BlueprintUpdateAnimation"));

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


// Function ABP_Civilian.ABP_Civilian_C.OnInitiateAnimationBlueprint
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Civilian_C::OnInitiateAnimationBlueprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.OnInitiateAnimationBlueprint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.AddSets
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerAnimationSetCollection* SetCollection                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Civilian_C::AddSets(class UTigerAnimationSetCollection* SetCollection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.AddSets"));

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


// Function ABP_Civilian.ABP_Civilian_C.AnimNotify_FootStep_Left
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Civilian_C::AnimNotify_FootStep_Left()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.AnimNotify_FootStep_Left"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.AnimNotify_Footstep_Right
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Civilian_C::AnimNotify_Footstep_Right()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.AnimNotify_Footstep_Right"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.OnFootstep
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsLeftFoot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          FootstepDuration               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Civilian_C::OnFootstep(bool bIsLeftFoot, float FootstepDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.OnFootstep"));

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


// Function ABP_Civilian.ABP_Civilian_C.OnNpcReactionEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerNpcReactionEvent  ReactionEvent                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UABP_Civilian_C::OnNpcReactionEvent(const struct FTigerNpcReactionEvent& ReactionEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.OnNpcReactionEvent"));

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


// Function ABP_Civilian.ABP_Civilian_C.AnimNotify_FullyRecovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Civilian_C::AnimNotify_FullyRecovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.AnimNotify_FullyRecovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.AnimNotify_ResetFeedingState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Civilian_C::AnimNotify_ResetFeedingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.AnimNotify_ResetFeedingState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.OnAnimationModeChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerAIAnimationMode          LastAnimationMode              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Civilian_C::OnAnimationModeChanged(ETigerAIAnimationMode LastAnimationMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.OnAnimationModeChanged"));

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


// Function ABP_Civilian.ABP_Civilian_C.OnBumpedByPlayerEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InDirectionToPlayer            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Civilian_C::OnBumpedByPlayerEvent(class ATigerPlayer* InPlayer, const struct FVector& InDirectionToPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.OnBumpedByPlayerEvent"));

	struct
	{
		class ATigerPlayer*            InPlayer;
		struct FVector                 InDirectionToPlayer;
	} params = {};

	params.InPlayer = InPlayer;
	params.InDirectionToPlayer = InDirectionToPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.OnSettle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerSettleEvent       SettleEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UABP_Civilian_C::OnSettle(const struct FTigerSettleEvent& SettleEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.OnSettle"));

	struct
	{
		struct FTigerSettleEvent       SettleEvent;
	} params = {};

	params.SettleEvent = SettleEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ABP_Civilian.ABP_Civilian_C.ExecuteUbergraph_ABP_Civilian
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_Civilian_C::ExecuteUbergraph_ABP_Civilian(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ABP_Civilian.ABP_Civilian_C.ExecuteUbergraph_ABP_Civilian"));

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
