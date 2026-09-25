#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};

struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A;
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61;
struct EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1;
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9;
struct GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE;
struct GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D;
struct InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B;
struct InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7;
struct UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D;
IL2CPP_EXTERN_C String_t* _stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A;
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61;
struct EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1;
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9;
struct GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE;
struct GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D;
struct InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B;
struct InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7;
struct UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2  : public RuntimeObject
{
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99  : public RuntimeObject
{
};
struct EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC  : public RuntimeObject
{
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685  : public RuntimeObject
{
};
struct EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17  : public RuntimeObject
{
};
struct EmptyArray_1_t662659478531CA2736931D12958F36C14566158B  : public RuntimeObject
{
};
struct EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900  : public RuntimeObject
{
};
struct EmptyArray_1_t3264D01575877F752602C31CBF848A455D557C15  : public RuntimeObject
{
};
struct EmptyArray_1_tED25994B188B6892932012A3712E4921DCF8DC7F  : public RuntimeObject
{
};
struct EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9  : public RuntimeObject
{
};
struct EmptyArray_1_t3ED800CA396DD5FE577C3573C21F0BC23A7BDF16  : public RuntimeObject
{
};
struct EmptyArray_1_tE1BA498278C22B67C666BD7058E54BC81EA1D825  : public RuntimeObject
{
};
struct EmptyArray_1_tC518321371D83293EEE3E6186DEABEDB5EBE2F5D  : public RuntimeObject
{
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24  : public RuntimeObject
{
};
struct EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344  : public RuntimeObject
{
};
struct EmptyArray_1_t7113B8DA030AFF38A7200E4BE63923D9F5C065AC  : public RuntimeObject
{
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065  : public RuntimeObject
{
};
struct EmptyArray_1_tD2F566BAB12FA76DB039E69BAD54167F71288B77  : public RuntimeObject
{
};
struct EmptyArray_1_t6F7601522B7C3D965C794144D6AB06B5E56C389F  : public RuntimeObject
{
};
struct EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47  : public RuntimeObject
{
};
struct EmptyArray_1_tBB3F2EBEEAFDFCA8B95C3844F3C87977017C8FB9  : public RuntimeObject
{
};
struct EmptyArray_1_tA3FD4DA73690B22AF51247DE4AB33A52280CF1DD  : public RuntimeObject
{
};
struct EmptyArray_1_tB3950DD0CFA703643EB93EDD4FF714B5A085FF8F  : public RuntimeObject
{
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D  : public RuntimeObject
{
};
struct EmptyArray_1_tAF2C88ED16F6EE561E378C2CA47889D8AB47A972  : public RuntimeObject
{
};
struct EmptyArray_1_t5C8D81E1D1E6C2E3B929149FA294E593E862EE82  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t6B5BC3F84B78A5C6A57A334C9983D89DEEB27902 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t21ECB9145DD6D35B94BDE795F5D7687542E79823 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t735902E3E4BC6EDF5B7039BA94645932FD9AEF73 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t6CF938B115353E6ED1063EDD4D7951C1EC17F70B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t58C9D7B3EC2C7BA9FF35C949A8C90C4F9A22F774 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA933299E0B6494F971DE1530656EE6411FA24A7A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t0BEFB51922551DE1ED8561F0664B684138B8227F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t9E27B0BA763C80368372F9471BC3CBC7760914A1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t3A49C41F0E00427FDA453EAA1AC36802B113FC83 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t86B3AB6727FB0CF3474F5B7BEBDA30FC9F9951D2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t5AFC0BF3A2DB1770044E74294C5C890137C2350B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t4278CDEF08AB2A2656585C4BB098C587D865536C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tCA4449FAE3867C564A19CF6C1D6395400FD3E74D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t085CD3432652D5217BF9B2337E9445D2EB93CE19 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnlyNativeStridedArray_1_tCC679F95DD7DD326003D602C20035196E7843176 
{
	void* ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_ByteStride;
};
struct ReadOnlyNativeStridedArray_1_t7BF67651F872E821EA43D1D8B52A2E21466273CC 
{
	void* ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_ByteStride;
};
struct ReadOnlyNativeStridedArray_1_tF24558571E44B16460DEB5A6764A45EF45DA303E 
{
	void* ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_ByteStride;
};
struct ReadOnlyNativeStridedArray_1_tF5720B54320B94852C16B3030E09EEEB19804A08 
{
	void* ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_ByteStride;
};
struct ReadOnlyNativeStridedArray_1_t7DB4BF971EC8B887E8C7F7C87F0A265D9663E7B3 
{
	void* ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_ByteStride;
};
struct ReadOnlyNativeStridedArray_1_t1885FAE80EC027D63930D64271E1DF10AA0DA5FD 
{
	void* ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_ByteStride;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___drawCommandPickingEntityIds;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D 
{
	uint8_t ___m_Data;
};
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 
{
	int32_t ___forceLod;
	float ___lodSelectionBias;
};
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF 
{
	uint32_t ___m_RenderingLayerMask;
	uint16_t ___m_Data;
	uint8_t ___m_ObjectLayer;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	int32_t ___start;
	int32_t ___length;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 
{
	uint8_t ___x;
	uint8_t ___y;
	uint8_t ___z;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct float3_t7600B73F092B37F484B12910A5269F30C778D31E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t545A994996126766890C1F28B43EA823F2410190 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 
{
	int8_t ___x;
	int8_t ___y;
	int8_t ___z;
};
struct sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 
{
	int8_t ___x;
	int8_t ___y;
	int8_t ___z;
	int8_t ___w;
};
struct short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E 
{
	int16_t ___x;
	int16_t ___y;
	int16_t ___z;
};
struct short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 
{
	int16_t ___x;
	int16_t ___y;
	int16_t ___z;
	int16_t ___w;
};
struct uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
};
struct ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 
{
	uint16_t ___x;
	uint16_t ___y;
	uint16_t ___z;
};
struct U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4__padding[16];
	};
};
struct U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67__padding[8];
	};
};
struct U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804__padding[16];
	};
};
struct LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 
{
	float ___m_LodSlope;
	float ___m_LodBias;
};
struct ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 
{
	intptr_t ____value;
};
struct ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 
{
	intptr_t ____value;
};
struct ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B 
{
	intptr_t ____value;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE 
{
	intptr_t ____value;
};
struct ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 
{
	intptr_t ____value;
};
struct ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 
{
	intptr_t ____value;
};
struct ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF 
{
	intptr_t ____value;
};
struct ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 
{
	intptr_t ____value;
};
struct ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 
{
	intptr_t ____value;
};
struct ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 
{
	intptr_t ____value;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 
{
	intptr_t ____value;
};
struct ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB 
{
	intptr_t ____value;
};
struct ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 
{
	intptr_t ____value;
};
struct ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 
{
	intptr_t ____value;
};
struct ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 
{
	intptr_t ____value;
};
struct ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 
{
	intptr_t ____value;
};
struct ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 
{
	intptr_t ____value;
};
struct ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED 
{
	intptr_t ____value;
};
struct ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 
{
	intptr_t ____value;
};
struct ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 
{
	intptr_t ____value;
};
struct ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD 
{
	intptr_t ____value;
};
struct ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A 
{
	intptr_t ____value;
};
struct ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 
{
	intptr_t ____value;
};
struct ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 
{
	intptr_t ____value;
};
struct ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B 
{
	U3Cm_ScreenRelativeTransitionHeightsU3Ee__FixedBuffer_t2C41FA0F591BD145EEED3C0E09D6F04CD521B804 ___m_ScreenRelativeTransitionHeights;
	U3Cm_FadeTransitionWidthsU3Ee__FixedBuffer_tC44EA0D00BAF5D4021A10861FE9C59C8804B21E4 ___m_FadeTransitionWidths;
	U3Cm_RendererCountsU3Ee__FixedBuffer_t877AF3B14647FADCA74D2F1A1BBB59648DC5AE67 ___m_RendererCounts;
	uint8_t ___m_Length;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 
{
	int32_t ___subMeshCount;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	uint32_t ___m_FaceID;
	float ___m_Distance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Collider;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___a;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___b;
	int32_t ___index;
};
struct UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___a;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___b;
	int32_t ___idx;
	int32_t ___type;
};
struct float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c0;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c1;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c2;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c3;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE 
{
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB 
{
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B 
{
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB 
{
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3 
{
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9 
{
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44 
{
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06 
{
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD 
{
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928 
{
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB 
{
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 ____pointer;
	int32_t ____length;
};
struct Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE ____pointer;
	int32_t ____length;
};
struct Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 ____pointer;
	int32_t ____length;
};
struct Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 ____pointer;
	int32_t ____length;
};
struct Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF ____pointer;
	int32_t ____length;
};
struct Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 ____pointer;
	int32_t ____length;
};
struct Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 ____pointer;
	int32_t ____length;
};
struct Span_1_tC1B695440A1567664C2665D76D5614739FDF453D 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer;
	int32_t ____length;
};
struct Span_1_t1013F208A58E5E32A4D18DEC19F9A98465C58B16 
{
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB ____pointer;
	int32_t ____length;
};
struct Span_1_tAFD876B17AF4D669C6A7F2BD60D9E2F6236FFB95 
{
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 ____pointer;
	int32_t ____length;
};
struct Span_1_t526D7626CCDA73BF8F4FE1D375A89DCACDCACDBB 
{
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 ____pointer;
	int32_t ____length;
};
struct Span_1_t8206B553B7E881F7BC4BEA2B12509D008E524211 
{
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 ____pointer;
	int32_t ____length;
};
struct Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 ____pointer;
	int32_t ____length;
};
struct Span_1_t1C480FE0F01F7D2528DC88B50B631D7D2C0A4859 
{
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED ____pointer;
	int32_t ____length;
};
struct Span_1_t30A3A2BC2768BDD7E400373ADDCD30106936BF43 
{
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 ____pointer;
	int32_t ____length;
};
struct Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 
{
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 ____pointer;
	int32_t ____length;
};
struct Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD ____pointer;
	int32_t ____length;
};
struct Span_1_t67B354B7480ABD4B9B0CC224963BF3FA97C32364 
{
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A ____pointer;
	int32_t ____length;
};
struct Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 
{
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 ____pointer;
	int32_t ____length;
};
struct Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 ____pointer;
	int32_t ____length;
};
struct Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct Span_1_t91E859A7F5102FCE48106AF191E764662C352376 
{
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 ____pointer;
	int32_t ____length;
};
struct Span_1_t1DE1A06AB5905D00E19175BF04280D391B66AE9B 
{
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_BodyID;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ThisBodyLinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ThisBodyAngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OtherBodyLinearVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_OtherBodyAngularVelocity;
};
struct GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B 
{
	int32_t ___topology;
	uint32_t ___baseVertex;
	uint32_t ___indexStart;
	uint32_t ___indexCount;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___entityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___cookieTextureEntityId;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
	float ___indirectMultiplier;
	int32_t ____padding;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2_StaticFields
{
	BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___Value;
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Value;
};
struct EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC_StaticFields
{
	BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___Value;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685_StaticFields
{
	ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___Value;
};
struct EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17_StaticFields
{
	CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___Value;
};
struct EmptyArray_1_t662659478531CA2736931D12958F36C14566158B_StaticFields
{
	EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* ___Value;
};
struct EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900_StaticFields
{
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___Value;
};
struct EmptyArray_1_t3264D01575877F752602C31CBF848A455D557C15_StaticFields
{
	GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* ___Value;
};
struct EmptyArray_1_tED25994B188B6892932012A3712E4921DCF8DC7F_StaticFields
{
	GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* ___Value;
};
struct EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F_StaticFields
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields
{
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___Value;
};
struct EmptyArray_1_t3ED800CA396DD5FE577C3573C21F0BC23A7BDF16_StaticFields
{
	InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* ___Value;
};
struct EmptyArray_1_tE1BA498278C22B67C666BD7058E54BC81EA1D825_StaticFields
{
	InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* ___Value;
};
struct EmptyArray_1_tC518321371D83293EEE3E6186DEABEDB5EBE2F5D_StaticFields
{
	InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* ___Value;
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___Value;
};
struct EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344_StaticFields
{
	KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___Value;
};
struct EmptyArray_1_t7113B8DA030AFF38A7200E4BE63923D9F5C065AC_StaticFields
{
	LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* ___Value;
};
struct EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___Value;
};
struct EmptyArray_1_tD2F566BAB12FA76DB039E69BAD54167F71288B77_StaticFields
{
	ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* ___Value;
};
struct EmptyArray_1_t6F7601522B7C3D965C794144D6AB06B5E56C389F_StaticFields
{
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___Value;
};
struct EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47_StaticFields
{
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___Value;
};
struct EmptyArray_1_tBB3F2EBEEAFDFCA8B95C3844F3C87977017C8FB9_StaticFields
{
	RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* ___Value;
};
struct EmptyArray_1_tA3FD4DA73690B22AF51247DE4AB33A52280CF1DD_StaticFields
{
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___Value;
};
struct EmptyArray_1_tB3950DD0CFA703643EB93EDD4FF714B5A085FF8F_StaticFields
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___Value;
};
struct EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___Value;
};
struct EmptyArray_1_tAF2C88ED16F6EE561E378C2CA47889D8AB47A972_StaticFields
{
	UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* ___Value;
};
struct EmptyArray_1_t5C8D81E1D1E6C2E3B929149FA294E593E862EE82_StaticFields
{
	UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* ___Value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_StaticFields
{
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 ___Default;
};
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_StaticFields
{
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF ___Default;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct float4_t545A994996126766890C1F28B43EA823F2410190_StaticFields
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___zero;
};
struct float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_StaticFields
{
	float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___identity;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80  : public RuntimeArray
{
	ALIGN_FIELD (8) BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D m_Items[1];

	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 m_Items[1];

	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B m_Items[1];

	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B value)
	{
		m_Items[index] = value;
	}
};
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61  : public RuntimeArray
{
	ALIGN_FIELD (8) CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 m_Items[1];

	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 value)
	{
		m_Items[index] = value;
	}
};
struct EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1  : public RuntimeArray
{
	ALIGN_FIELD (8) EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B m_Items[1];

	inline EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B value)
	{
		m_Items[index] = value;
	}
};
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9  : public RuntimeArray
{
	ALIGN_FIELD (8) EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 m_Items[1];

	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 value)
	{
		m_Items[index] = value;
	}
};
struct GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE  : public RuntimeArray
{
	ALIGN_FIELD (8) GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 m_Items[1];

	inline GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32 value)
	{
		m_Items[index] = value;
	}
};
struct GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C  : public RuntimeArray
{
	ALIGN_FIELD (8) GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B m_Items[1];

	inline GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
struct InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D  : public RuntimeArray
{
	ALIGN_FIELD (8) InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D m_Items[1];

	inline InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D value)
	{
		m_Items[index] = value;
	}
};
struct InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B  : public RuntimeArray
{
	ALIGN_FIELD (8) InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 m_Items[1];

	inline InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73 value)
	{
		m_Items[index] = value;
	}
};
struct InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87  : public RuntimeArray
{
	ALIGN_FIELD (8) InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF m_Items[1];

	inline InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF value)
	{
		m_Items[index] = value;
	}
};
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC  : public RuntimeArray
{
	ALIGN_FIELD (8) JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 m_Items[1];

	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		m_Items[index] = value;
	}
};
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
struct LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713  : public RuntimeArray
{
	ALIGN_FIELD (8) LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 m_Items[1];

	inline LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 value)
	{
		m_Items[index] = value;
	}
};
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
struct ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B  : public RuntimeArray
{
	ALIGN_FIELD (8) ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 m_Items[1];

	inline ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 value)
	{
		m_Items[index] = value;
	}
};
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE  : public RuntimeArray
{
	ALIGN_FIELD (8) Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C m_Items[1];

	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		m_Items[index] = value;
	}
};
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
struct RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46  : public RuntimeArray
{
	ALIGN_FIELD (8) RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 m_Items[1];

	inline RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 value)
	{
		m_Items[index] = value;
	}
};
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7  : public RuntimeArray
{
	ALIGN_FIELD (8) UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 m_Items[1];

	inline UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1 value)
	{
		m_Items[index] = value;
	}
};
struct UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84  : public RuntimeArray
{
	ALIGN_FIELD (8) UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC m_Items[1];

	inline UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m5E422A0C147B8372423DA2FBD542E9B56475E155_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t6B5BC3F84B78A5C6A57A334C9983D89DEEB27902 NativeSliceExtensions_Slice_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m4D1BA487DB05DC156CA1DEB57933BAC6D4EFE7D3 (NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___0_thisArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_mBAEBE758EB5C6D05DDE281EB05AC51DDC34711ED (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC ___0_src, NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtility_ReadArrayElement_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m905C72220D8382A63DE15F641FB79D977F0832D1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 NativeSliceExtensions_Slice_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m8D80FC62FB10184EC779921FC467142A5DD65874 (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___0_thisArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m5C7B60713F7F566CBD2FBDC3F7A220C21B872201 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353 ___0_src, NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtility_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mD87C3A7372D142B0EA88A8FF8AD08122940B359B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA NativeSliceExtensions_Slice_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mDADD436BC7C2A9DE4579859BDDF6EECCC9A15236 (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___0_thisArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m8BFC8D36DF304C50778FF60BCAB71C094AE7B48D (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657 ___0_src, NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 UnsafeUtility_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m5F208C837C6C181F7E81B6B6A36ECB74684DBA9F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t21ECB9145DD6D35B94BDE795F5D7687542E79823 NativeSliceExtensions_Slice_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m89E86A1F69CB32BC95056567084294761E095115 (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___0_thisArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m8156A0B4F0F3C5E82E6648A3E19F1082AE8E057F (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38 ___0_src, NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA UnsafeUtility_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mD8EE7D8C864807FBCEC4DDC8FA4F49020E69CDAD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m39B188D0E7EFBF8BB50DAC2D8AB0D4B416C0913F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t735902E3E4BC6EDF5B7039BA94645932FD9AEF73 NativeSliceExtensions_Slice_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m07CDE1DB0B82309A210D93679A83D3FD0716849F (NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___0_thisArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m49BFEEF09A821626B4591486D7446F217998201A (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985 ___0_src, NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 UnsafeUtility_ReadArrayElement_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m69E498529672D8705FB236D730C08065B89F0EFB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mDA2CC4CFDF13432CD0F6B08B78AFCADE31C16E5A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t6CF938B115353E6ED1063EDD4D7951C1EC17F70B NativeSliceExtensions_Slice_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m34E2E902078DE5F9FF6D42D5BE67AA536F319F66 (NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___0_thisArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m952E5654D474692062C21C82516C1C21FDA9C736 (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7 ___0_src, NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 UnsafeUtility_ReadArrayElement_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mD09D9FB229BE47475FA11D0BC51E0462309DADB6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m277D2B82543894400F2730BCB1472C5B724A80C7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t58C9D7B3EC2C7BA9FF35C949A8C90C4F9A22F774 NativeSliceExtensions_Slice_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mCE8922FD5D793B79C1BB66DE92A41B509B1F5B0F (NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___0_thisArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m0EB525D8A14581C338E504AC59BD9411B9CE541A (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B ___0_src, NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 UnsafeUtility_ReadArrayElement_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mCB0A9294C8CC48F89EA3A395A60C27A0B9C88E43_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m3FEDECD4C69FC51951E58D1CE5504808FBEB8525_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA933299E0B6494F971DE1530656EE6411FA24A7A NativeSliceExtensions_Slice_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mD41583ED6F8EDBB333240779B889EA3FA606360F (NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___0_thisArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m1D35543936F080CC184BB9575BDF8554C897B016 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E ___0_src, NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtility_ReadArrayElement_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mCFE0F00C39EA5D2BE10413FCE7D400BF7A67134F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtility_ReadArrayElementWithStride_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m6625B716B5D5B46E0E1B468DDF49D803AC5BC79D_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtility_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mFE1F5718E0BB21814F12FFABF6F1225692861091_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 UnsafeUtility_ReadArrayElementWithStride_Tissbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39_mA975F11026D3468099BE55A3AB702AFFBC22DEDD_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E UnsafeUtility_ReadArrayElementWithStride_Tisshort3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E_m20C832EE0B72BE24BCDD299D95B0BCE05AC6B978_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtility_ReadArrayElementWithStride_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mECC3D9E093A7EB2077FDC90597116406231342CC_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198 (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7 (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80 (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C (EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___0_destination, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* Array_Empty_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m87CA399E64D82A02BCE81DF2F8F52AD65AC9BC25_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6 (GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___0_destination, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* Array_Empty_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m0C324743704C230D82B1D3F4A8A72DAECCD01F62_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F (GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___0_destination, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* Array_Empty_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mE8D045B3FF593AAD4C1EC5FD9B669AAC4C2A5BDE_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31 (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m00B24155C8BCD589BA2049C5362D10B7BC551821 (InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___0_destination, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* Array_Empty_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_mB158970D4273B39753506A6ECB7585D0421BDA9B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF00F0A4AF9CB7D449D3687DD0C6DF3960F23C8E1 (InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___0_destination, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* Array_Empty_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m84564B99B54C40C147D3A88036CC3D9735B5BCB2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mB4E2E23C09C3885CB95CD011199F57E9BC79F632 (InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___0_destination, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* Array_Empty_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m3CC4AD8964A97157D964C70F4FAD0DEB0DFB6F31_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988 (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_destination, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___0_destination, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* Array_Empty_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mD7C4C67D28BC2015E6AEAC2EB631C28550B6F876_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4 (ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_destination, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* Array_Empty_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m171C76990EAD2F2943A87BABB79B20678A3EB156_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mB9D5545DD5F09B740B941EEEC446D6DDDF8761F8 (RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___0_destination, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* Array_Empty_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FA6ECB1AF7012B967576165F9CC50F2D282A272_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250 (int8_t* ___0_destination, int8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m5B8AD5D85E61891746B21D0E835C7DB36C7CF181 (UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* ___0_destination, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* Array_Empty_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m1E056A5DCDCD92CBB4C160F7C488F7872C2CD959_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2C6A7396A90038CFB2693ACCB2C25F8E1DC07FAC (UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* ___0_destination, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* Array_Empty_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m632FF706BFE05FABBB1E9E5507F6A789F8EDDEC4_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m78272C2BF84C058D8EE1DC1B527061D994DE5A8D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtilityInternal_ReadArrayElement_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_mD2F873DB0980857C41237FCC123CD3BC1B6B57E6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m0F16771B993937271160B6B8203D4AF6E89B3E20_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtilityInternal_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1DB9C74A2931EC40BC55F536EAF48A42F71DF8B7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mC0D8F1150C7D0AB1BF48EAE3FF8A9E7EADCFC89E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 UnsafeUtilityInternal_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m4345334F80FD4FB761347999B8A9004C958D64DA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mFBBF9A2E9BB0CAB3C6D88F9704CB94801B5AD2AD_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA UnsafeUtilityInternal_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m2E0FD6D2498C503F769CEFE47DF79E726B9C7FDD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mACC62B7BAF4F96671BDF67DAF8426803DA34BD5A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 UnsafeUtilityInternal_ReadArrayElement_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mE687C1AD6376CCC54F5866BFFE1F255B9DA6C077_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mEF2765F622ED105A14F0656807BBB2425A0121C3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 UnsafeUtilityInternal_ReadArrayElement_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mC30EE097D8547D03C2210B9BFF9FADB621597409_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m23BA149EBF76E163C89964705E74FA4224977ACE_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 UnsafeUtilityInternal_ReadArrayElement_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m92C80DB24D1D32A50FADE2ADA13211A588275A7C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mB83ABF072941823A1F4667BF1B89999548C0C8C6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtilityInternal_ReadArrayElement_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mFD2AC276019C55228F1B14548F4BE7E84A490C65_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtilityInternal_ReadArrayElementWithStride_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m932FACC6D67C0E64F840E47EE9566B3CF528CACC_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtilityInternal_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1026DB327315683A43C770F7042A812828864AB5_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 UnsafeUtilityInternal_ReadArrayElementWithStride_Tissbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39_m062B9F3D9CACE856BC27C2414CEB7DEE37B585FE_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E UnsafeUtilityInternal_ReadArrayElementWithStride_Tisshort3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E_m8AF3F30BF819A18FA5A928CD3EACC230316694F7_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtilityInternal_ReadArrayElementWithStride_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mF963CE2AADAF08A579C1BBECD9EF22F15F5173DD_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;

inline void ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8 (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m76FF03CE368024BB6686B829C1C4BE89937E8564_inline (NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m5E422A0C147B8372423DA2FBD542E9B56475E155_inline (const RuntimeMethod* method) ;
inline void ReadOnlyNativeArray_1__ctor_m0C7620E6778342136583941D0B6AA679A8297317 (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
inline NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m2959DD4DAB3FD4005C2584B88212BD3B27DEDDBA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t6B5BC3F84B78A5C6A57A334C9983D89DEEB27902 NativeSliceExtensions_Slice_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m4D1BA487DB05DC156CA1DEB57933BAC6D4EFE7D3 (NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___0_thisArray, const RuntimeMethod* method) ;
inline ReadOnly_t0BEFB51922551DE1ED8561F0664B684138B8227F NativeArray_1_AsReadOnly_mD6991FFD3DC0CD91E9930D8647F04C5352B5838F (NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t0BEFB51922551DE1ED8561F0664B684138B8227F (*) (NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2*, const RuntimeMethod*))NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared)(__this, method);
}
inline int32_t ReadOnlyNativeArray_1_get_Length_m15234CB1B86B0B9C9FAC2CBAF7288053233ABCC8_inline (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC*, const RuntimeMethod*))ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_mBAEBE758EB5C6D05DDE281EB05AC51DDC34711ED (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC ___0_src, NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtility_ReadArrayElement_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m905C72220D8382A63DE15F641FB79D977F0832D1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m86EA1574E3058D7A600EE37BA98E2FCD897402A1_inline (NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m9B3A79F2B958C4B1234A9A54BB75DF99B440FDB3_inline (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_inline (const RuntimeMethod* method) ;
inline void ReadOnlyNativeArray_1__ctor_m50367375A2451B3F8FFD498270BE25F7FE60B1B6 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
inline NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m8BA1AFBF31B9A3893B3265DD0EF2A5E369A19A6B (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 NativeSliceExtensions_Slice_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m8D80FC62FB10184EC779921FC467142A5DD65874 (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___0_thisArray, const RuntimeMethod* method) ;
inline ReadOnly_t9E27B0BA763C80368372F9471BC3CBC7760914A1 NativeArray_1_AsReadOnly_m22D4989EB3727973B01CD8D5D3605FE118CE9022 (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t9E27B0BA763C80368372F9471BC3CBC7760914A1 (*) (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3*, const RuntimeMethod*))NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared)(__this, method);
}
inline int32_t ReadOnlyNativeArray_1_get_Length_mDAD1A3FF71896423E1BCA4304F94B2BBB4B9A559_inline (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353*, const RuntimeMethod*))ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m5C7B60713F7F566CBD2FBDC3F7A220C21B872201 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353 ___0_src, NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtility_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mD87C3A7372D142B0EA88A8FF8AD08122940B359B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m7052F5F0C60F0B60926D96C77F77DA1B2C9077B1_inline (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mBD0DE69BAAE716F992E579D4FDC9BB0A246F905B_inline (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_inline (const RuntimeMethod* method) ;
inline void ReadOnlyNativeArray_1__ctor_mDCF674E94F643C38383A9A1259097305CBE33787 (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
inline NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m956BF4C4CD747FA479934578C8B86E164314C2C4 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA NativeSliceExtensions_Slice_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mDADD436BC7C2A9DE4579859BDDF6EECCC9A15236 (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___0_thisArray, const RuntimeMethod* method) ;
inline ReadOnly_t3A49C41F0E00427FDA453EAA1AC36802B113FC83 NativeArray_1_AsReadOnly_m1B26ACFF453CF45D8090749AB7CEAA814E491CB6 (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t3A49C41F0E00427FDA453EAA1AC36802B113FC83 (*) (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788*, const RuntimeMethod*))NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared)(__this, method);
}
inline int32_t ReadOnlyNativeArray_1_get_Length_mD06D23E3C2121FB2F2CD3A28505790F3B941489C_inline (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657*, const RuntimeMethod*))ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m8BFC8D36DF304C50778FF60BCAB71C094AE7B48D (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657 ___0_src, NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 UnsafeUtility_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m5F208C837C6C181F7E81B6B6A36ECB74684DBA9F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m7CB0C48CDB9840A4E4E047E957B1EB1366A847DF_inline (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mE1FE8B3F94C2D43FDF7F6D5262F6173FC1EB1FA1_inline (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_inline (const RuntimeMethod* method) ;
inline void ReadOnlyNativeArray_1__ctor_m91E107034F4D29D09E0D3105F36CC70357269D43 (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
inline NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m05E8F9125CBCF8D65D1C1572A90497410BAD4B3F (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t21ECB9145DD6D35B94BDE795F5D7687542E79823 NativeSliceExtensions_Slice_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m89E86A1F69CB32BC95056567084294761E095115 (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___0_thisArray, const RuntimeMethod* method) ;
inline ReadOnly_t86B3AB6727FB0CF3474F5B7BEBDA30FC9F9951D2 NativeArray_1_AsReadOnly_m4676C169DBEDB18A6356E35ADF6250BE55AB3141 (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t86B3AB6727FB0CF3474F5B7BEBDA30FC9F9951D2 (*) (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F*, const RuntimeMethod*))NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared)(__this, method);
}
inline int32_t ReadOnlyNativeArray_1_get_Length_mD6D885D9E0F969E808EDD75C67F0571DFD80F6DA_inline (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38*, const RuntimeMethod*))ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m8156A0B4F0F3C5E82E6648A3E19F1082AE8E057F (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38 ___0_src, NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA UnsafeUtility_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mD8EE7D8C864807FBCEC4DDC8FA4F49020E69CDAD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m34E21F9D73DCAA73B1887EA181BBB606C0E8F7AD_inline (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m3E2541E90A984A9DAA22BDA87F80A5EA64E93CA3_inline (NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m39B188D0E7EFBF8BB50DAC2D8AB0D4B416C0913F_inline (const RuntimeMethod* method) ;
inline void ReadOnlyNativeArray_1__ctor_m1A9F1872CC7006E43D61A8241B222715D2B78C44 (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
inline NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mB74326D0BDB6E6FDCBFFADB081FE82064E22C505 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t735902E3E4BC6EDF5B7039BA94645932FD9AEF73 NativeSliceExtensions_Slice_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m07CDE1DB0B82309A210D93679A83D3FD0716849F (NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___0_thisArray, const RuntimeMethod* method) ;
inline ReadOnly_t5AFC0BF3A2DB1770044E74294C5C890137C2350B NativeArray_1_AsReadOnly_m21F38FBCD98C17069654620C138903E38099040D (NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t5AFC0BF3A2DB1770044E74294C5C890137C2350B (*) (NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3*, const RuntimeMethod*))NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared)(__this, method);
}
inline int32_t ReadOnlyNativeArray_1_get_Length_mC0DA482E314EB87EB98DDBB2B8F88E7B737A6FB4_inline (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985*, const RuntimeMethod*))ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m49BFEEF09A821626B4591486D7446F217998201A (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985 ___0_src, NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 UnsafeUtility_ReadArrayElement_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m69E498529672D8705FB236D730C08065B89F0EFB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mF16975B878E00C1DB1EC1C34F0D13C09134A3377_inline (NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m587372720FFFF2687FD0B70A0959576B058AFD82_inline (NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mDA2CC4CFDF13432CD0F6B08B78AFCADE31C16E5A_inline (const RuntimeMethod* method) ;
inline void ReadOnlyNativeArray_1__ctor_mBCBB5B655F87244E18169B17E1CCA453012A26E7 (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
inline NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m5A71D2537869AB34CA0631ACB20F8ABAD151ABE2 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t6CF938B115353E6ED1063EDD4D7951C1EC17F70B NativeSliceExtensions_Slice_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m34E2E902078DE5F9FF6D42D5BE67AA536F319F66 (NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___0_thisArray, const RuntimeMethod* method) ;
inline ReadOnly_t4278CDEF08AB2A2656585C4BB098C587D865536C NativeArray_1_AsReadOnly_m4B3E9A026B8B840BB8F584B8EB75226F5C1F75CD (NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t4278CDEF08AB2A2656585C4BB098C587D865536C (*) (NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C*, const RuntimeMethod*))NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared)(__this, method);
}
inline int32_t ReadOnlyNativeArray_1_get_Length_mAF48CA20CE94039E7A305F55EBDA845AE792883E_inline (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7*, const RuntimeMethod*))ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m952E5654D474692062C21C82516C1C21FDA9C736 (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7 ___0_src, NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 UnsafeUtility_ReadArrayElement_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mD09D9FB229BE47475FA11D0BC51E0462309DADB6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m272924278968B027FC83529EE97C9A5C82102DE3_inline (NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m15FFD3F1624F1F3791BC9F528B9F3D729A8FD266_inline (NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m277D2B82543894400F2730BCB1472C5B724A80C7_inline (const RuntimeMethod* method) ;
inline void ReadOnlyNativeArray_1__ctor_m919B3C17675F9C6A3DE08E7E4597223E3258A3ED (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
inline NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mBF499C55ADE7797FAB7716CF33AA13D2936D4193 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t58C9D7B3EC2C7BA9FF35C949A8C90C4F9A22F774 NativeSliceExtensions_Slice_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mCE8922FD5D793B79C1BB66DE92A41B509B1F5B0F (NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___0_thisArray, const RuntimeMethod* method) ;
inline ReadOnly_tCA4449FAE3867C564A19CF6C1D6395400FD3E74D NativeArray_1_AsReadOnly_m5D0147D6957102359BBF8CD50A29F69219504BE4 (NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_tCA4449FAE3867C564A19CF6C1D6395400FD3E74D (*) (NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08*, const RuntimeMethod*))NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared)(__this, method);
}
inline int32_t ReadOnlyNativeArray_1_get_Length_m45C664E3A35D059B8996CFFBF13F194266957324_inline (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B*, const RuntimeMethod*))ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m0EB525D8A14581C338E504AC59BD9411B9CE541A (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B ___0_src, NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 UnsafeUtility_ReadArrayElement_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mCB0A9294C8CC48F89EA3A395A60C27A0B9C88E43_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m136BE74011C11BB750F5F86F358F99CF71DFF099_inline (NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m0D56B2CBA2604EA52DA419C2B84597AF6EEC6AFC_inline (NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m3FEDECD4C69FC51951E58D1CE5504808FBEB8525_inline (const RuntimeMethod* method) ;
inline void ReadOnlyNativeArray_1__ctor_mD3DBB56D60106A65D7B5CA5256A1DF2D57FC1313 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E*, void*, int32_t, const RuntimeMethod*))ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared)(__this, ___0_buffer, ___1_length, method);
}
inline NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m226291B01E6B592CBE3D8763E6107C2BAB084BC9 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA933299E0B6494F971DE1530656EE6411FA24A7A NativeSliceExtensions_Slice_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mD41583ED6F8EDBB333240779B889EA3FA606360F (NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___0_thisArray, const RuntimeMethod* method) ;
inline ReadOnly_t085CD3432652D5217BF9B2337E9445D2EB93CE19 NativeArray_1_AsReadOnly_m6844C1E440C71B79E346B51059D523E7252CF64B (NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t085CD3432652D5217BF9B2337E9445D2EB93CE19 (*) (NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B*, const RuntimeMethod*))NativeArray_1_AsReadOnly_m6A3C4FD632C19C139E79007CE683549D40A600F2_fshared)(__this, method);
}
inline int32_t ReadOnlyNativeArray_1_get_Length_m608475FBE400C9E395DB482F3C1F07502E2C026D_inline (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E*, const RuntimeMethod*))ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m1D35543936F080CC184BB9575BDF8554C897B016 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E ___0_src, NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___1_dst, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtility_ReadArrayElement_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mCFE0F00C39EA5D2BE10413FCE7D400BF7A67134F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mD9099249E437A2399DA066A108F3F63C450EF11A_inline (NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtility_ReadArrayElementWithStride_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m6625B716B5D5B46E0E1B468DDF49D803AC5BC79D_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtility_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mFE1F5718E0BB21814F12FFABF6F1225692861091_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 UnsafeUtility_ReadArrayElementWithStride_Tissbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39_mA975F11026D3468099BE55A3AB702AFFBC22DEDD_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E UnsafeUtility_ReadArrayElementWithStride_Tisshort3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E_m20C832EE0B72BE24BCDD299D95B0BCE05AC6B978_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtility_ReadArrayElementWithStride_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mECC3D9E093A7EB2077FDC90597116406231342CC_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7*, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198 (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2*, bool*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_inline (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7 (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_inline (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B*, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80 (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_inline (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF*, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m7DA42A78AA51399F6E2624EC951C4C5675A83DF4_inline (Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C (EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___0_destination, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m47891B0EBECA0C6CBF5505295F2B0E603027A014_inline (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744*, EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* Array_Empty_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m87CA399E64D82A02BCE81DF2F8F52AD65AC9BC25_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_inline (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mE30066A0C4D7876DED68538384FA5CC160C69D64_inline (Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6 (GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___0_destination, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m10A374622B0CBE7DF98D6204B69DB5AB8EBEDC48_inline (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60*, GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* Array_Empty_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m0C324743704C230D82B1D3F4A8A72DAECCD01F62_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m183BDBAC2D1A9253029D7DF02565C77C96404029_inline (Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F (GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___0_destination, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mAEA18BE2EAFC93735C1D95BE4DB087870A3E109E_inline (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95*, GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* Array_Empty_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mE8D045B3FF593AAD4C1EC5FD9B669AAC4C2A5BDE_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC1B695440A1567664C2665D76D5614739FDF453D*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31 (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_inline (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int16_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71*, int16_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282*, int32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, intptr_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC*, intptr_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m26D39C1CBA7A073C6608FAC3CC2CB966317877B0_inline (Span_1_t1013F208A58E5E32A4D18DEC19F9A98465C58B16* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t1013F208A58E5E32A4D18DEC19F9A98465C58B16*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m00B24155C8BCD589BA2049C5362D10B7BC551821 (InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___0_destination, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mF9A417640E3DAD6919A1EFCCC307620D5D3801DD_inline (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE*, InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* Array_Empty_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_mB158970D4273B39753506A6ECB7585D0421BDA9B_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m84E346C64DFC0DF7E9150B32781D35B9142ED299_inline (Span_1_tAFD876B17AF4D669C6A7F2BD60D9E2F6236FFB95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tAFD876B17AF4D669C6A7F2BD60D9E2F6236FFB95*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF00F0A4AF9CB7D449D3687DD0C6DF3960F23C8E1 (InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___0_destination, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mD39AB7E952AB6C102F7DD1179B4F6F0F13F09A98_inline (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB*, InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* Array_Empty_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m84564B99B54C40C147D3A88036CC3D9735B5BCB2_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m4EDAE00E321B738DEA5DF5F96ACA09E5D2078FA2_inline (Span_1_t526D7626CCDA73BF8F4FE1D375A89DCACDCACDBB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t526D7626CCDA73BF8F4FE1D375A89DCACDCACDBB*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mB4E2E23C09C3885CB95CD011199F57E9BC79F632 (InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___0_destination, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mBD10718D20DDB4962E83CE6396D38094E7009927_inline (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B*, InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* Array_Empty_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m3CC4AD8964A97157D964C70F4FAD0DEB0DFB6F31_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m0BE6EA932B404A54A3AF19C9654ED2611196FAE5_inline (Span_1_t8206B553B7E881F7BC4BEA2B12509D008E524211* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t8206B553B7E881F7BC4BEA2B12509D008E524211*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988 (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_destination, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m5146D98DC32810D3BC61D690968758CF2711417A_inline (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_inline (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m71967E3A96F8CD633AAD49AD447C6047FA04982E_inline (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m67C4FD7A514561C3A82294F8A06BCAC4AC2DC06D_inline (Span_1_t1C480FE0F01F7D2528DC88B50B631D7D2C0A4859* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t1C480FE0F01F7D2528DC88B50B631D7D2C0A4859*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___0_destination, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mDF073225F55C4D3B281FEC5A6065C0A9B553F0C4_inline (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3*, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* Array_Empty_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mD7C4C67D28BC2015E6AEAC2EB631C28550B6F876_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_inline (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m54AF9B0B6187D8384ECFF0F000CACF71B3008935_inline (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m7A2FFCD20AEBD3466DB2856E294D42357CF2FE69_inline (Span_1_t30A3A2BC2768BDD7E400373ADDCD30106936BF43* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t30A3A2BC2768BDD7E400373ADDCD30106936BF43*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4 (ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_destination, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m14D1465F766CC9E4A9FF41814736CE45D277C02D_inline (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9*, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* Array_Empty_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m171C76990EAD2F2943A87BABB79B20678A3EB156_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m382D9A80197EEF760AE971BA67861E5F2FC2FDE1_inline (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mBCDA11006EEBB02A0F8C8AD5D31AEB13BC8918A4_inline (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44*, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_inline (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mA7A30FB7B805A8FB05709CD7C7D8C29E3F3C60CA_inline (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m935A58100847BA5DDD175AD48F6BAE58405B6274_inline (Span_1_t67B354B7480ABD4B9B0CC224963BF3FA97C32364* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t67B354B7480ABD4B9B0CC224963BF3FA97C32364*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mB9D5545DD5F09B740B941EEEC446D6DDDF8761F8 (RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___0_destination, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m8EA8116C2600C1FDF0AD4D2A54C710781A4050BB_inline (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06*, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* Array_Empty_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FA6ECB1AF7012B967576165F9CC50F2D282A272_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mA7772A74BF980252F9D805432D912AD281AD2C17_inline (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_destination, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m2F1048E4C305F0CF15B3CDBD5E73EAAF024308AA_inline (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD*, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_inline (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250 (int8_t* ___0_destination, int8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m783D660E0BF03935E536537C3B32F79A7BD0FB42_inline (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, int8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC*, int8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, float* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D*, float*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m9AFB9D02D8A8AFCD6ED1141987B9D286B67413C8_inline (Span_1_t91E859A7F5102FCE48106AF191E764662C352376* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t91E859A7F5102FCE48106AF191E764662C352376*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m5B8AD5D85E61891746B21D0E835C7DB36C7CF181 (UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* ___0_destination, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mD1FA2C269E7225534F87982871172E2BF966D6F8_inline (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928*, UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* Array_Empty_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m1E056A5DCDCD92CBB4C160F7C488F7872C2CD959_inline (const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m6C5E2C0CA543EB88576173104FF16834FBDC9D69_inline (Span_1_t1DE1A06AB5905D00E19175BF04280D391B66AE9B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t1DE1A06AB5905D00E19175BF04280D391B66AE9B*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2C6A7396A90038CFB2693ACCB2C25F8E1DC07FAC (UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* ___0_destination, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m5F08B31B7913DF85EC0AF356647321BCDA8DD0C6_inline (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB*, UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* Array_Empty_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m632FF706BFE05FABBB1E9E5507F6A789F8EDDEC4_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m78272C2BF84C058D8EE1DC1B527061D994DE5A8D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtilityInternal_ReadArrayElement_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_mD2F873DB0980857C41237FCC123CD3BC1B6B57E6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m0F16771B993937271160B6B8203D4AF6E89B3E20_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtilityInternal_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1DB9C74A2931EC40BC55F536EAF48A42F71DF8B7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mC0D8F1150C7D0AB1BF48EAE3FF8A9E7EADCFC89E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 UnsafeUtilityInternal_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m4345334F80FD4FB761347999B8A9004C958D64DA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mFBBF9A2E9BB0CAB3C6D88F9704CB94801B5AD2AD_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA UnsafeUtilityInternal_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m2E0FD6D2498C503F769CEFE47DF79E726B9C7FDD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mACC62B7BAF4F96671BDF67DAF8426803DA34BD5A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 UnsafeUtilityInternal_ReadArrayElement_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mE687C1AD6376CCC54F5866BFFE1F255B9DA6C077_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mEF2765F622ED105A14F0656807BBB2425A0121C3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 UnsafeUtilityInternal_ReadArrayElement_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mC30EE097D8547D03C2210B9BFF9FADB621597409_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m23BA149EBF76E163C89964705E74FA4224977ACE_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 UnsafeUtilityInternal_ReadArrayElement_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m92C80DB24D1D32A50FADE2ADA13211A588275A7C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mB83ABF072941823A1F4667BF1B89999548C0C8C6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtilityInternal_ReadArrayElement_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mFD2AC276019C55228F1B14548F4BE7E84A490C65_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtilityInternal_ReadArrayElementWithStride_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m932FACC6D67C0E64F840E47EE9566B3CF528CACC_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtilityInternal_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1026DB327315683A43C770F7042A812828864AB5_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 UnsafeUtilityInternal_ReadArrayElementWithStride_Tissbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39_m062B9F3D9CACE856BC27C2414CEB7DEE37B585FE_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E UnsafeUtilityInternal_ReadArrayElementWithStride_Tisshort3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E_m8AF3F30BF819A18FA5A928CD3EACC230316694F7_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtilityInternal_ReadArrayElementWithStride_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mF963CE2AADAF08A579C1BBECD9EF22F15F5173DD_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m242FF6E4751326229EE439B1228E5930C0D2ECA1_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))((&___0_nativeArray), NULL);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, void* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		__this->___m_Length = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D ReadOnlyNativeArray_1_GetSubArray_m797403832DB4DC48FB17984DF326A806D2CBEB68_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_m92B7DFE24C4BDB3BC82506673AA8FD53B16FBDD8((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ReadOnlyNativeArray_1_ToSlice_mAF95D8A949BCD9F7DB3ED46F9FB03B6F622D8D6B_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(L_0, L_1, 1, NULL);
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		L_3 = ((  NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ReadOnlyNativeArray_1_AsNativeArrayReadOnly_mB2AC29997EEEAAD293AE037B9646896A4D722365_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_3;
		L_3 = ((  ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ReadOnlyNativeArray_1_GetUnsafeReadOnlyPtr_mB56CE7E1BF7D55A184779DCDC3DF9D5CA41BF93F_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_mE203F6CDD1C85B29DDE15E2A52EA6AB2E5897825_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ((  int32_t (*) (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ((  int32_t (*) (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_mCF4DD51E02BC9D96A4513D239514ECE12D7F9676_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D L_0 = (*(ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D*)__this);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___0_array;
		((  void (*) (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_get_Item_m82C981C3370B994B4D1BB68936DF31BED98C9124_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tFC130C279B42A254D7794902D938AA8C3CAD8E8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tFC130C279B42A254D7794902D938AA8C3CAD8E8D);
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tFC130C279B42A254D7794902D938AA8C3CAD8E8D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_mA90BD0A06ED42D5E600C6D9FF1E76F5AD57569C0_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyNativeArray_1_get_IsCreated_m2513F713E810782BB84B624E3A3DA5EB563B7DC2_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_mBD5CE14093A61567CC1D8A049E2228148C41CDDE_fshared (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___1_dst;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ((  int32_t (*) (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))((&___0_src), NULL);
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_m5B265E3F9E4478E51B25FD9D2AE2069F1CE5C55C_fshared (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m9BEACCD58A7F53CF3BAF3C69B57D3362F2EC77C1 (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m76FF03CE368024BB6686B829C1C4BE89937E8564_inline(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_nativeArray))->___m_Length);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC ReadOnlyNativeArray_1_GetSubArray_m44B3C2269102F6CF2F6D7119C431077A3F4C28A3 (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m5E422A0C147B8372423DA2FBD542E9B56475E155_inline(NULL);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_m0C7620E6778342136583941D0B6AA679A8297317((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t6B5BC3F84B78A5C6A57A334C9983D89DEEB27902 ReadOnlyNativeArray_1_ToSlice_m49A2A2FFF60EE34C904141F1BDF540A786D0FD89 (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m2959DD4DAB3FD4005C2584B88212BD3B27DEDDBA(L_0, L_1, 1, NULL);
		NativeSlice_1_t6B5BC3F84B78A5C6A57A334C9983D89DEEB27902 L_3;
		L_3 = NativeSliceExtensions_Slice_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m4D1BA487DB05DC156CA1DEB57933BAC6D4EFE7D3(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t0BEFB51922551DE1ED8561F0664B684138B8227F ReadOnlyNativeArray_1_AsNativeArrayReadOnly_mEC01236030E3731A0AF7322C93CAC8F1E94688E6 (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m2959DD4DAB3FD4005C2584B88212BD3B27DEDDBA(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_t0BEFB51922551DE1ED8561F0664B684138B8227F L_3;
		L_3 = NativeArray_1_AsReadOnly_mD6991FFD3DC0CD91E9930D8647F04C5352B5838F((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_m97D89FC44FFE414D61CDD18B73A60BD7AF5B4C30 (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ReadOnlyNativeArray_1_get_Length_m15234CB1B86B0B9C9FAC2CBAF7288053233ABCC8_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ReadOnlyNativeArray_1_get_Length_m15234CB1B86B0B9C9FAC2CBAF7288053233ABCC8_inline(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ReadOnlyNativeArray_1_get_Length_m15234CB1B86B0B9C9FAC2CBAF7288053233ABCC8_inline(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_m9497C33F82F59CFCEB9636762BC62AC23C0D0E89 (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___0_array, const RuntimeMethod* method) 
{
	{
		ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC L_0 = (*(ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC*)__this);
		NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 L_1 = ___0_array;
		ReadOnlyNativeArray_1_Copy_mBAEBE758EB5C6D05DDE281EB05AC51DDC34711ED(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 ReadOnlyNativeArray_1_get_Item_mC354D270129DF78537BA854B81655CB7B4BB98FA (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m905C72220D8382A63DE15F641FB79D977F0832D1_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_mF3F23742A54D44ECDFEAEE80454124041F876DC0 (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_mBAEBE758EB5C6D05DDE281EB05AC51DDC34711ED (ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC ___0_src, NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 ___1_dst, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_t84440CE51BE8E9C31F459785675A8955B1ED0ED2 L_0 = ___1_dst;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m86EA1574E3058D7A600EE37BA98E2FCD897402A1_inline(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_t5F1BC8343786850B9DAAAB3C1EA1A717932BDDAC L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ReadOnlyNativeArray_1_get_Length_m15234CB1B86B0B9C9FAC2CBAF7288053233ABCC8_inline((&___0_src), NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m5E422A0C147B8372423DA2FBD542E9B56475E155_inline(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_m19DEEFD49FFF3D573005CB39C159BE8F62DBB41A (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m6639325ADB1A1D41D6F3291CEBD825E168116E65 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m9B3A79F2B958C4B1234A9A54BB75DF99B440FDB3_inline(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_nativeArray))->___m_Length);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353 ReadOnlyNativeArray_1_GetSubArray_m619A648F8A05D6242255CB874B54CEB52EEF4AA3 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_inline(NULL);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_m50367375A2451B3F8FFD498270BE25F7FE60B1B6((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 ReadOnlyNativeArray_1_ToSlice_mF6683B4039B088A2DCFCBEA9E46229B00A181137 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m8BA1AFBF31B9A3893B3265DD0EF2A5E369A19A6B(L_0, L_1, 1, NULL);
		NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 L_3;
		L_3 = NativeSliceExtensions_Slice_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m8D80FC62FB10184EC779921FC467142A5DD65874(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t9E27B0BA763C80368372F9471BC3CBC7760914A1 ReadOnlyNativeArray_1_AsNativeArrayReadOnly_mD2CE79854C31EEFB87B0192581D1620D24B69794 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m8BA1AFBF31B9A3893B3265DD0EF2A5E369A19A6B(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_t9E27B0BA763C80368372F9471BC3CBC7760914A1 L_3;
		L_3 = NativeArray_1_AsReadOnly_m22D4989EB3727973B01CD8D5D3605FE118CE9022((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_m6D71AE41A906F6F37E8B07EA2057FA6ABF7732E3 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ReadOnlyNativeArray_1_get_Length_mDAD1A3FF71896423E1BCA4304F94B2BBB4B9A559_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ReadOnlyNativeArray_1_get_Length_mDAD1A3FF71896423E1BCA4304F94B2BBB4B9A559_inline(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ReadOnlyNativeArray_1_get_Length_mDAD1A3FF71896423E1BCA4304F94B2BBB4B9A559_inline(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_m21266B649FBAF2462D686A832D22D21AE50701AA (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___0_array, const RuntimeMethod* method) 
{
	{
		ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353 L_0 = (*(ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353*)__this);
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_1 = ___0_array;
		ReadOnlyNativeArray_1_Copy_m5C7B60713F7F566CBD2FBDC3F7A220C21B872201(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E ReadOnlyNativeArray_1_get_Item_mC1123BE3EEA31DDCBECB9269AFB5652B7F0B9AC9 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mD87C3A7372D142B0EA88A8FF8AD08122940B359B_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_m603009A729343840852E3893344E66B72D700379 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m5C7B60713F7F566CBD2FBDC3F7A220C21B872201 (ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353 ___0_src, NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___1_dst, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_0 = ___1_dst;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m7052F5F0C60F0B60926D96C77F77DA1B2C9077B1_inline(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_tF1C66ABD2307FD57B1D40CE3446F71B4E4063353 L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ReadOnlyNativeArray_1_get_Length_mDAD1A3FF71896423E1BCA4304F94B2BBB4B9A559_inline((&___0_src), NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_inline(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_m6A1DDFAD952F486938A3139157193C2A3ACF93EF (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m331C536883BB76D6FCE8B06C89EF0A969ACF2FB8 (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mBD0DE69BAAE716F992E579D4FDC9BB0A246F905B_inline(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_nativeArray))->___m_Length);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657 ReadOnlyNativeArray_1_GetSubArray_m1FA990B0235933DA8E9062CE5CA178D7E96EE6F6 (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_inline(NULL);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_mDCF674E94F643C38383A9A1259097305CBE33787((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA ReadOnlyNativeArray_1_ToSlice_mBD89B6286BCC26FCFDDD889356A087EC6BF7A44C (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m956BF4C4CD747FA479934578C8B86E164314C2C4(L_0, L_1, 1, NULL);
		NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA L_3;
		L_3 = NativeSliceExtensions_Slice_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mDADD436BC7C2A9DE4579859BDDF6EECCC9A15236(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t3A49C41F0E00427FDA453EAA1AC36802B113FC83 ReadOnlyNativeArray_1_AsNativeArrayReadOnly_m23575613076D69614E5F0C1FB6AFED1BFC22B2B6 (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m956BF4C4CD747FA479934578C8B86E164314C2C4(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_t3A49C41F0E00427FDA453EAA1AC36802B113FC83 L_3;
		L_3 = NativeArray_1_AsReadOnly_m1B26ACFF453CF45D8090749AB7CEAA814E491CB6((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_m05F098FC76A4FE37AA08D11DA6AA6CD98D1F49E9 (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ReadOnlyNativeArray_1_get_Length_mD06D23E3C2121FB2F2CD3A28505790F3B941489C_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ReadOnlyNativeArray_1_get_Length_mD06D23E3C2121FB2F2CD3A28505790F3B941489C_inline(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ReadOnlyNativeArray_1_get_Length_mD06D23E3C2121FB2F2CD3A28505790F3B941489C_inline(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_m6628494E0BBAC60CBEF7BEA8EEFF48FA176C309E (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___0_array, const RuntimeMethod* method) 
{
	{
		ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657 L_0 = (*(ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657*)__this);
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_1 = ___0_array;
		ReadOnlyNativeArray_1_Copy_m8BFC8D36DF304C50778FF60BCAB71C094AE7B48D(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 ReadOnlyNativeArray_1_get_Item_mB3D8834592222CEA679361DF270BF63D843D94C9 (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m5F208C837C6C181F7E81B6B6A36ECB74684DBA9F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_mD7FD83AA0A23934DE4A33D940E451E3A6DFA353B (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m8BFC8D36DF304C50778FF60BCAB71C094AE7B48D (ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657 ___0_src, NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___1_dst, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_0 = ___1_dst;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m7CB0C48CDB9840A4E4E047E957B1EB1366A847DF_inline(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_tF1C82EAFC709C749C0E4FAB30E290F2F91523657 L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ReadOnlyNativeArray_1_get_Length_mD06D23E3C2121FB2F2CD3A28505790F3B941489C_inline((&___0_src), NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_inline(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_m9D7CF2A81B780148BF114FDC41B0EF9177DBBB15 (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m03A735449985952E2158E7E60802B01BEC05185F (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mE1FE8B3F94C2D43FDF7F6D5262F6173FC1EB1FA1_inline(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_nativeArray))->___m_Length);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38 ReadOnlyNativeArray_1_GetSubArray_mC1C46F331EE9F2E564F0E045A1255ADCFFC6C015 (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_inline(NULL);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_m91E107034F4D29D09E0D3105F36CC70357269D43((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t21ECB9145DD6D35B94BDE795F5D7687542E79823 ReadOnlyNativeArray_1_ToSlice_mC80DDA8BBD85FF79F039A490BB65B19708B6FB7D (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m05E8F9125CBCF8D65D1C1572A90497410BAD4B3F(L_0, L_1, 1, NULL);
		NativeSlice_1_t21ECB9145DD6D35B94BDE795F5D7687542E79823 L_3;
		L_3 = NativeSliceExtensions_Slice_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m89E86A1F69CB32BC95056567084294761E095115(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t86B3AB6727FB0CF3474F5B7BEBDA30FC9F9951D2 ReadOnlyNativeArray_1_AsNativeArrayReadOnly_m247638C89DE20F68C3F80B0983ED78701F3973B6 (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, const RuntimeMethod* method) 
{
	NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m05E8F9125CBCF8D65D1C1572A90497410BAD4B3F(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_t86B3AB6727FB0CF3474F5B7BEBDA30FC9F9951D2 L_3;
		L_3 = NativeArray_1_AsReadOnly_m4676C169DBEDB18A6356E35ADF6250BE55AB3141((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_m830E82DB7108E5CB30244F886EABCA145BA9FC9F (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ReadOnlyNativeArray_1_get_Length_mD6D885D9E0F969E808EDD75C67F0571DFD80F6DA_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ReadOnlyNativeArray_1_get_Length_mD6D885D9E0F969E808EDD75C67F0571DFD80F6DA_inline(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ReadOnlyNativeArray_1_get_Length_mD6D885D9E0F969E808EDD75C67F0571DFD80F6DA_inline(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_m7820DBB44210EDFEFB2DCC34620C2359830847B0 (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___0_array, const RuntimeMethod* method) 
{
	{
		ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38 L_0 = (*(ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38*)__this);
		NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F L_1 = ___0_array;
		ReadOnlyNativeArray_1_Copy_m8156A0B4F0F3C5E82E6648A3E19F1082AE8E057F(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ReadOnlyNativeArray_1_get_Item_mAD81D1EA2E6DCC9AA80C7708B9B3059F3FACB498 (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mD8EE7D8C864807FBCEC4DDC8FA4F49020E69CDAD_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_m0993B3234148B2F1E7BDB243FD31157D9115A81A (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m8156A0B4F0F3C5E82E6648A3E19F1082AE8E057F (ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38 ___0_src, NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___1_dst, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F L_0 = ___1_dst;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m34E21F9D73DCAA73B1887EA181BBB606C0E8F7AD_inline(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_tB188046FE8B2B80C30A7CD42B4346D09A512AB38 L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ReadOnlyNativeArray_1_get_Length_mD6D885D9E0F969E808EDD75C67F0571DFD80F6DA_inline((&___0_src), NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_inline(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_m83B213BDBA89ADCF2DA29007A75F3E9F7D72770D (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m8D9660B69B57B6785C0E577A0EB3AD490A8CDE3A (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m3E2541E90A984A9DAA22BDA87F80A5EA64E93CA3_inline(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_nativeArray))->___m_Length);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985 ReadOnlyNativeArray_1_GetSubArray_m299FE802A23F73D2B5CC9220344812E506C3A1EC (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m39B188D0E7EFBF8BB50DAC2D8AB0D4B416C0913F_inline(NULL);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_m1A9F1872CC7006E43D61A8241B222715D2B78C44((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t735902E3E4BC6EDF5B7039BA94645932FD9AEF73 ReadOnlyNativeArray_1_ToSlice_m9C0B4B7D4B34B5DA32963269BDFE4F546404F5B5 (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mB74326D0BDB6E6FDCBFFADB081FE82064E22C505(L_0, L_1, 1, NULL);
		NativeSlice_1_t735902E3E4BC6EDF5B7039BA94645932FD9AEF73 L_3;
		L_3 = NativeSliceExtensions_Slice_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m07CDE1DB0B82309A210D93679A83D3FD0716849F(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t5AFC0BF3A2DB1770044E74294C5C890137C2350B ReadOnlyNativeArray_1_AsNativeArrayReadOnly_mAE867C607E28EA7F81CC1BEAF75A7FDD49FCB803 (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mB74326D0BDB6E6FDCBFFADB081FE82064E22C505(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_t5AFC0BF3A2DB1770044E74294C5C890137C2350B L_3;
		L_3 = NativeArray_1_AsReadOnly_m21F38FBCD98C17069654620C138903E38099040D((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_m85FF539101588479087349D4B3790062E9C3747B (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ReadOnlyNativeArray_1_get_Length_mC0DA482E314EB87EB98DDBB2B8F88E7B737A6FB4_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ReadOnlyNativeArray_1_get_Length_mC0DA482E314EB87EB98DDBB2B8F88E7B737A6FB4_inline(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ReadOnlyNativeArray_1_get_Length_mC0DA482E314EB87EB98DDBB2B8F88E7B737A6FB4_inline(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_m10EC151D723867BBC3F5D160AE847476AF0C40A1 (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___0_array, const RuntimeMethod* method) 
{
	{
		ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985 L_0 = (*(ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985*)__this);
		NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 L_1 = ___0_array;
		ReadOnlyNativeArray_1_Copy_m49BFEEF09A821626B4591486D7446F217998201A(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 ReadOnlyNativeArray_1_get_Item_mB4279194ABDE51B56F8596BAA9E65D82CFE57F06 (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m69E498529672D8705FB236D730C08065B89F0EFB_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_m16E33E7431CFEE8A2F721E9F4E484EDABDD101A6 (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m49BFEEF09A821626B4591486D7446F217998201A (ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985 ___0_src, NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 ___1_dst, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_t2711297194C87DCE9601FD0AF5E753D1364590F3 L_0 = ___1_dst;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mF16975B878E00C1DB1EC1C34F0D13C09134A3377_inline(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_tEE834A073CE32F6F4441A97BF8439EC7BEC00985 L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ReadOnlyNativeArray_1_get_Length_mC0DA482E314EB87EB98DDBB2B8F88E7B737A6FB4_inline((&___0_src), NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m39B188D0E7EFBF8BB50DAC2D8AB0D4B416C0913F_inline(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_m649F866CC98957234C00ECC10F84A7E11D262B06 (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m3D000EAD6F34690DFF61EAA260C2FE9900714EED (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m587372720FFFF2687FD0B70A0959576B058AFD82_inline(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_nativeArray))->___m_Length);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7 ReadOnlyNativeArray_1_GetSubArray_m77ED40F3C4EF7BE5F159EBB57755CFD2289679B5 (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mDA2CC4CFDF13432CD0F6B08B78AFCADE31C16E5A_inline(NULL);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_mBCBB5B655F87244E18169B17E1CCA453012A26E7((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t6CF938B115353E6ED1063EDD4D7951C1EC17F70B ReadOnlyNativeArray_1_ToSlice_m42CBF2BFC761DC7971C9A00C128A65F1CD2B7F65 (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m5A71D2537869AB34CA0631ACB20F8ABAD151ABE2(L_0, L_1, 1, NULL);
		NativeSlice_1_t6CF938B115353E6ED1063EDD4D7951C1EC17F70B L_3;
		L_3 = NativeSliceExtensions_Slice_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m34E2E902078DE5F9FF6D42D5BE67AA536F319F66(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t4278CDEF08AB2A2656585C4BB098C587D865536C ReadOnlyNativeArray_1_AsNativeArrayReadOnly_m3372191A8F4EAA8E531419646C57B55ED2272D5C (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m5A71D2537869AB34CA0631ACB20F8ABAD151ABE2(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_t4278CDEF08AB2A2656585C4BB098C587D865536C L_3;
		L_3 = NativeArray_1_AsReadOnly_m4B3E9A026B8B840BB8F584B8EB75226F5C1F75CD((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_mD6BF72ADEAABDB77EE3121A7BAEC517EBB14A766 (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ReadOnlyNativeArray_1_get_Length_mAF48CA20CE94039E7A305F55EBDA845AE792883E_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ReadOnlyNativeArray_1_get_Length_mAF48CA20CE94039E7A305F55EBDA845AE792883E_inline(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ReadOnlyNativeArray_1_get_Length_mAF48CA20CE94039E7A305F55EBDA845AE792883E_inline(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_m147E670824C5E5123AAA3C1305383C46EAE47E94 (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___0_array, const RuntimeMethod* method) 
{
	{
		ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7 L_0 = (*(ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7*)__this);
		NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C L_1 = ___0_array;
		ReadOnlyNativeArray_1_Copy_m952E5654D474692062C21C82516C1C21FDA9C736(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 ReadOnlyNativeArray_1_get_Item_m224AC5436848BC374220A85E22801F6B4D16334F (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mD09D9FB229BE47475FA11D0BC51E0462309DADB6_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_m8D8CD46146F0CCBBC25BBE53C0657FFFEDC578BD (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m952E5654D474692062C21C82516C1C21FDA9C736 (ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7 ___0_src, NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C ___1_dst, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_t2BD1C1C0A5171C3312A6E701EADEF29263EB2D7C L_0 = ___1_dst;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_m272924278968B027FC83529EE97C9A5C82102DE3_inline(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_t3A9B4AE9E145D70780FF77D3A6DB0773852F25C7 L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ReadOnlyNativeArray_1_get_Length_mAF48CA20CE94039E7A305F55EBDA845AE792883E_inline((&___0_src), NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mDA2CC4CFDF13432CD0F6B08B78AFCADE31C16E5A_inline(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_m33EAA325D2FA7EE4043513BA834AE1D0B7CB7E25 (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m83CBD30187FAAC51566FB296885D86CEB571EA18 (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m15FFD3F1624F1F3791BC9F528B9F3D729A8FD266_inline(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_nativeArray))->___m_Length);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B ReadOnlyNativeArray_1_GetSubArray_m65247770203A7BE8DF213F566ABB22859F5578A0 (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m277D2B82543894400F2730BCB1472C5B724A80C7_inline(NULL);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_m919B3C17675F9C6A3DE08E7E4597223E3258A3ED((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t58C9D7B3EC2C7BA9FF35C949A8C90C4F9A22F774 ReadOnlyNativeArray_1_ToSlice_m20083A270A27B51387FF8B86625C6B8DB53FA457 (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mBF499C55ADE7797FAB7716CF33AA13D2936D4193(L_0, L_1, 1, NULL);
		NativeSlice_1_t58C9D7B3EC2C7BA9FF35C949A8C90C4F9A22F774 L_3;
		L_3 = NativeSliceExtensions_Slice_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mCE8922FD5D793B79C1BB66DE92A41B509B1F5B0F(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_tCA4449FAE3867C564A19CF6C1D6395400FD3E74D ReadOnlyNativeArray_1_AsNativeArrayReadOnly_mC56178DEA581FEFD1D5CF90B9BE2BDB6660D4154 (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, const RuntimeMethod* method) 
{
	NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mBF499C55ADE7797FAB7716CF33AA13D2936D4193(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_tCA4449FAE3867C564A19CF6C1D6395400FD3E74D L_3;
		L_3 = NativeArray_1_AsReadOnly_m5D0147D6957102359BBF8CD50A29F69219504BE4((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_mA9EAA1B16D773DC8383BED951941E13EAA7C82E3 (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ReadOnlyNativeArray_1_get_Length_m45C664E3A35D059B8996CFFBF13F194266957324_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ReadOnlyNativeArray_1_get_Length_m45C664E3A35D059B8996CFFBF13F194266957324_inline(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ReadOnlyNativeArray_1_get_Length_m45C664E3A35D059B8996CFFBF13F194266957324_inline(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_mD2CD061198CB805667D7344B8C8E442347561EA5 (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___0_array, const RuntimeMethod* method) 
{
	{
		ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B L_0 = (*(ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B*)__this);
		NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 L_1 = ___0_array;
		ReadOnlyNativeArray_1_Copy_m0EB525D8A14581C338E504AC59BD9411B9CE541A(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 ReadOnlyNativeArray_1_get_Item_mEAC5BAB503CDA682B3F2EDA00D26293EA165D372 (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mCB0A9294C8CC48F89EA3A395A60C27A0B9C88E43_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_m0A5F070DFB7833A2FA32BE909C95F17175431FC4 (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m0EB525D8A14581C338E504AC59BD9411B9CE541A (ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B ___0_src, NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 ___1_dst, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_tC182C502423843D9449AFBEEADF8C55983CA2F08 L_0 = ___1_dst;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m136BE74011C11BB750F5F86F358F99CF71DFF099_inline(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_t8FC2611675EF48BBA14611AA6A7903370FC9671B L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ReadOnlyNativeArray_1_get_Length_m45C664E3A35D059B8996CFFBF13F194266957324_inline((&___0_src), NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m277D2B82543894400F2730BCB1472C5B724A80C7_inline(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_mCB42D313ECEE9590A74FE247909F5E25BDD52EDD (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1__ctor_m76C4C29D3F7F38C5715167F48F4A625490FEE4F5 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B L_0 = ___0_nativeArray;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m0D56B2CBA2604EA52DA419C2B84597AF6EEC6AFC_inline(L_0, NULL);
		__this->___m_Buffer = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_nativeArray))->___m_Length);
		__this->___m_Length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E ReadOnlyNativeArray_1_GetSubArray_m1CB0BFD1D658EF1F6D764B579B02444CA479DF69 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m3FEDECD4C69FC51951E58D1CE5504808FBEB8525_inline(NULL);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___0_start;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___1_length;
		ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlyNativeArray_1__ctor_mD3DBB56D60106A65D7B5CA5256A1DF2D57FC1313((&L_7), ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA933299E0B6494F971DE1530656EE6411FA24A7A ReadOnlyNativeArray_1_ToSlice_mEA73431A9172CD60325595B69657D4BB5B5A2FB9 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m226291B01E6B592CBE3D8763E6107C2BAB084BC9(L_0, L_1, 1, NULL);
		NativeSlice_1_tA933299E0B6494F971DE1530656EE6411FA24A7A L_3;
		L_3 = NativeSliceExtensions_Slice_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mD41583ED6F8EDBB333240779B889EA3FA606360F(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t085CD3432652D5217BF9B2337E9445D2EB93CE19 ReadOnlyNativeArray_1_AsNativeArrayReadOnly_mDF67F57CF962F79627F57F83E04A1E94ED59F4BF (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = __this->___m_Length;
		NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B L_2;
		L_2 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m226291B01E6B592CBE3D8763E6107C2BAB084BC9(L_0, L_1, 1, NULL);
		V_0 = L_2;
		ReadOnly_t085CD3432652D5217BF9B2337E9445D2EB93CE19 L_3;
		L_3 = NativeArray_1_AsReadOnly_m6844C1E440C71B79E346B51059D523E7252CF64B((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckGetSubArrayArguments_m7388E553F0CC7343A24D54C4FCB4C875E8E5ED68 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_start;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B44E8AF112FB1F2C5DC4BF107AB2E7B751A2679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2 = ___0_start;
		int32_t L_3 = ___1_length;
		int32_t L_4;
		L_4 = ReadOnlyNativeArray_1_get_Length_m608475FBE400C9E395DB482F3C1F07502E2C026D_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_start;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = ___0_start;
		int32_t L_9 = ___1_length;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		int32_t L_12;
		L_12 = ReadOnlyNativeArray_1_get_Length_m608475FBE400C9E395DB482F3C1F07502E2C026D_inline(__this, NULL);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral521EAB4D6213622563FD7D86681F74BD2656740B)), L_7, L_11, L_14, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0051:
	{
		int32_t L_17 = ___0_start;
		int32_t L_18 = ___1_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18))) >= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_19 = ___0_start;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = ___0_start;
		int32_t L_23 = ___1_length;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, L_23)), 1));
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26;
		L_26 = ReadOnlyNativeArray_1_get_Length_m608475FBE400C9E395DB482F3C1F07502E2C026D_inline(__this, NULL);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29;
		L_29 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BFC19AC0F5DB8AA2A640D05B8C1674C8EF79999)), L_21, L_25, L_28, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, method);
	}

IL_0084:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CopyTo_m2B1827094B61C6904E522A4058CC7AEDBF83833B (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___0_array, const RuntimeMethod* method) 
{
	{
		ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E L_0 = (*(ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E*)__this);
		NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B L_1 = ___0_array;
		ReadOnlyNativeArray_1_Copy_m1D35543936F080CC184BB9575BDF8554C897B016(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 ReadOnlyNativeArray_1_get_Item_m4706D7026DEBEF8596ADFCB4DFCE8DED98A18C5E (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 L_2;
		L_2 = UnsafeUtility_ReadArrayElement_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mCFE0F00C39EA5D2BE10413FCE7D400BF7A67134F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckElementReadAccess_m4D3461F1BF414D437FB23F7AD4826A3EAC9E86D8 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->___m_Length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = __this->___m_Length;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_4, L_7, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_Copy_m1D35543936F080CC184BB9575BDF8554C897B016 (ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E ___0_src, NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B ___1_dst, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		NativeArray_1_t813D56CDD5ADEE6611AF5A2E680091047931595B L_0 = ___1_dst;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mD9099249E437A2399DA066A108F3F63C450EF11A_inline(L_0, NULL);
		V_0 = (uint8_t*)L_1;
		uint8_t* L_2 = V_0;
		ReadOnlyNativeArray_1_t0788FFBBC8B090376D90763414D65A8441203B2E L_3 = ___0_src;
		void* L_4 = L_3.___m_Buffer;
		int32_t L_5;
		L_5 = ReadOnlyNativeArray_1_get_Length_m608475FBE400C9E395DB482F3C1F07502E2C026D_inline((&___0_src), NULL);
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m3FEDECD4C69FC51951E58D1CE5504808FBEB8525_inline(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_5, L_6)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, L_4, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeArray_1_CheckCopyLengths_mECF1CD15CE059335E3C5B793A8946EC41B14D504 (int32_t ___0_srcLength, int32_t ___1_dstLength, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_srcLength;
		int32_t L_1 = ___1_dstLength;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBC8DD0A89DAC6A59F413A1D4189A03A7097CA55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeStridedArray_1__ctor_mE34F51FE9F64841882B35AE9240879CE8DFD4E53_fshared (ReadOnlyNativeStridedArray_1_tCC679F95DD7DD326003D602C20035196E7843176* __this, void* ___0_buffer, int32_t ___1_byteLength, int32_t ___2_offset, int32_t ___3_count, int32_t ___4_byteStride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		int32_t L_1 = ___2_offset;
		__this->___m_Buffer = ((void*)il2cpp_codegen_add((intptr_t)L_0, L_1));
		int32_t L_2 = ___3_count;
		__this->___m_Count = L_2;
		int32_t L_3 = ___4_byteStride;
		__this->___m_ByteStride = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeStridedArray_1_get_Item_m1CEF6CA1CF0330F5831FBF49A8EFAAB7A2FFBBDE_fshared (ReadOnlyNativeStridedArray_1_tCC679F95DD7DD326003D602C20035196E7843176* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t230636F7C8FCFF518E51B99CCFFC57231562F694 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t230636F7C8FCFF518E51B99CCFFC57231562F694);
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_ByteStride;
		InvokerActionInvoker4< void*, int32_t, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), NULL, L_0, L_1, L_2, (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t230636F7C8FCFF518E51B99CCFFC57231562F694);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeStridedArray_1_CheckReadIndex_mFDDEA6D2F1D3BB5D27CFDFC04EB514526FE6C867_fshared (ReadOnlyNativeStridedArray_1_tCC679F95DD7DD326003D602C20035196E7843176* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0030;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_Count;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 ReadOnlyNativeStridedArray_1_get_Item_m21D8F8B6BB392F32197224225A9BD6204E471137 (ReadOnlyNativeStridedArray_1_t7BF67651F872E821EA43D1D8B52A2E21466273CC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_ByteStride;
		byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 L_3;
		L_3 = UnsafeUtility_ReadArrayElementWithStride_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m6625B716B5D5B46E0E1B468DDF49D803AC5BC79D_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeStridedArray_1_CheckReadIndex_m82331DFCC1C7DBF88867FA8D187280DEA14483B6 (ReadOnlyNativeStridedArray_1_t7BF67651F872E821EA43D1D8B52A2E21466273CC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0030;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_Count;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E ReadOnlyNativeStridedArray_1_get_Item_m2D088BE49843847C22CC47D32C81676E10A85E4A (ReadOnlyNativeStridedArray_1_tF24558571E44B16460DEB5A6764A45EF45DA303E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_ByteStride;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_3;
		L_3 = UnsafeUtility_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mFE1F5718E0BB21814F12FFABF6F1225692861091_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeStridedArray_1_CheckReadIndex_mDF4555786E456A495057EF0374F105E22F0658B7 (ReadOnlyNativeStridedArray_1_tF24558571E44B16460DEB5A6764A45EF45DA303E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0030;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_Count;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 ReadOnlyNativeStridedArray_1_get_Item_m474239D54072C54D67108FD4D4F50E7E97E6F259 (ReadOnlyNativeStridedArray_1_tF5720B54320B94852C16B3030E09EEEB19804A08* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_ByteStride;
		sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 L_3;
		L_3 = UnsafeUtility_ReadArrayElementWithStride_Tissbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39_mA975F11026D3468099BE55A3AB702AFFBC22DEDD_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeStridedArray_1_CheckReadIndex_mB7F83D41FFAED3486109244C4222317CB68C9167 (ReadOnlyNativeStridedArray_1_tF5720B54320B94852C16B3030E09EEEB19804A08* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0030;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_Count;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E ReadOnlyNativeStridedArray_1_get_Item_m44F74933B9DF3AA041D1E3CE2693429E59E901ED (ReadOnlyNativeStridedArray_1_t7DB4BF971EC8B887E8C7F7C87F0A265D9663E7B3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_ByteStride;
		short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E L_3;
		L_3 = UnsafeUtility_ReadArrayElementWithStride_Tisshort3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E_m20C832EE0B72BE24BCDD299D95B0BCE05AC6B978_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeStridedArray_1_CheckReadIndex_m6BA2A3E865E2EDA5872813ED97C408F749E25A06 (ReadOnlyNativeStridedArray_1_t7DB4BF971EC8B887E8C7F7C87F0A265D9663E7B3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0030;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_Count;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 ReadOnlyNativeStridedArray_1_get_Item_m2C442281A225616507BDB9EE204560B5F7B6956F (ReadOnlyNativeStridedArray_1_t1885FAE80EC027D63930D64271E1DF10AA0DA5FD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_ByteStride;
		ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 L_3;
		L_3 = UnsafeUtility_ReadArrayElementWithStride_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mECC3D9E093A7EB2077FDC90597116406231342CC_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeStridedArray_1_CheckReadIndex_m76EF08961F9E0FB8FF076DC65B89F804F978EA98 (ReadOnlyNativeStridedArray_1_t1885FAE80EC027D63930D64271E1DF10AA0DA5FD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Count;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0030;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___m_Count;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78D1797D300D272DAAA9A7D2C16B93504340EFD1)), L_5, L_8, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_10 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0030:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4702ED3CB3E74C8B043D81F216ADF83AE0418021 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_12;
		L_12 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_11);
		int32_t L_13 = ___1_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_14;
		L_14 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_12, L_13, sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF08CD0D591791D31E721C8F03DC3632EC611942E (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_2;
		L_2 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>((uint8_t*)L_1);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ReadOnlySpan_1_get_Item_mB04EED1F39BF7ED9A120CBE4A518B201E47780D2 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_3, L_4, sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mA3BD60807A531BFB3AFB377B9B9F7CF0B1250B91 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___0_destination;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3 = L_2.____pointer;
		V_0 = L_3;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m202888740EDFA7E793DB939EF69BE64DA1BC6FD6 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___0_destination;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3 = L_2.____pointer;
		V_1 = L_3;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_1 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m407A2BF8F2614DCAD4AF6825F49D117C0B3C695E (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 ReadOnlySpan_1_Slice_m34FE3198E00F512E60480008BC8801F38D0BA881 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_3, L_4, sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 ReadOnlySpan_1_Slice_m2987082B3484085C44DF03114DBB885F2F148209 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_8;
		L_8 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_6, L_7, sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ReadOnlySpan_1_ToArray_m0AE891B83FB21C2BA94D85716FC3F39D9CD54BEA (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_1;
		L_1 = Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_3 = (BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*)(BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_5);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_7 = __this->____pointer;
		V_0 = L_7;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m610EFAA346D93C8C29248F5F4AD9CB8D8F333739 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mD33AF3D7885C2998A72682CC6B91F31482E10063 (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m34C5555BE5980FEDF468DC66E1DBE6FE2373FCAC (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		bool* L_12;
		L_12 = il2cpp_unsafe_as_ref<bool>(L_11);
		int32_t L_13 = ___1_start;
		bool* L_14;
		L_14 = il2cpp_unsafe_add<bool,int32_t>(L_12, L_13, sizeof(bool));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFFF826E0AE2F5714D74873D22EEEDEBD6B41DA93 (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		bool* L_2;
		L_2 = il2cpp_unsafe_as_ref<bool>((uint8_t*)L_1);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* ReadOnlySpan_1_get_Item_mFF62D7DF0E4B11ABB8F52E1DA4D674EE7C13F544 (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4, sizeof(bool));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m68979CB9768517F7CB54FD06A135229BD67116EA (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_0 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mE70871A3C5DE13F2BC43A9987E90B37A4DBF1F93 (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_1 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mA76F634454FB10AB7CDBE939E630CA350DAE04F0 (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 ReadOnlySpan_1_Slice_m9DE3E1DDEEA271823A9F9654BC5BE8E82E823961 (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4, sizeof(bool));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 ReadOnlySpan_1_Slice_mF9D34C5700763E9CF78E2CF40CFC4E34CB78A3DF (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		bool* L_8;
		L_8 = il2cpp_unsafe_add<bool,int32_t>(L_6, L_7, sizeof(bool));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ReadOnlySpan_1_ToArray_m0403E6670DDBDDE0C996C3CAB0D597293FCB0A6D (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
		L_1 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		bool* L_6;
		L_6 = il2cpp_unsafe_as_ref<bool>(L_5);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_7 = __this->____pointer;
		V_0 = L_7;
		bool* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mEEE2211222C6D7EE6566F457739199EB2AEFE0F0 (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m393DB2737EAAC6E768469A733343CABB2E207420 (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFB384FD10F6D51D6A937EA9B1096145A2AEC76A6 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12;
		L_12 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>(L_11);
		int32_t L_13 = ___1_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_14;
		L_14 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_12, L_13, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC05B1826DE4F2D24EA4ACBF887B46969A32E1864 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2;
		L_2 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>((uint8_t*)L_1);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ReadOnlySpan_1_get_Item_m6E16724B56B2556345BB55AC0A7D8C91AA15B0C7 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_2 = __this->____pointer;
		V_0 = L_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5;
		L_5 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_3, L_4, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m83454782190C82ABACA976D82FF6993162777E4E (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_2 = ___0_destination;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3 = L_2.____pointer;
		V_0 = L_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_0 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mB2196E028EF17F1F5A4C6C69A096BF0133FCC692 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_2 = ___0_destination;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3 = L_2.____pointer;
		V_1 = L_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_1));
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_1 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m3D8172EDC539D7ABA59D6A1845314901BA0B0537 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 ReadOnlySpan_1_Slice_m70440B15F28E98927CBB808DA56044558856C55E (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_2 = __this->____pointer;
		V_0 = L_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5;
		L_5 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_3, L_4, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 ReadOnlySpan_1_Slice_m0CA7AB9DED79E22C791839E29F63ABB68210603E (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_0 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8;
		L_8 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_6, L_7, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ReadOnlySpan_1_ToArray_m2B9E4011E3272DB371DBAE00E2C99D63C1096AF7 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_1;
		L_1 = Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_3 = (BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5*)(BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>(L_5);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_7 = __this->____pointer;
		V_0 = L_7;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mC41E4D57F9D0A34A5F0B4A1FA773F175A8C07F64 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mF294C697B0A025735FB030B09D96DE149981DB85 (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<uint8_t>(L_11);
		int32_t L_13 = ___1_start;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_add<uint8_t,int32_t>(L_12, L_13, sizeof(uint8_t));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4, sizeof(uint8_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m2C902AB57D2363B06C42BDDE761F3E0DFD5541B3 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m72B233A5EEDFB1EC10568EBB03636205A2CD2BA6 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4, sizeof(uint8_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7, sizeof(uint8_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m8233C912934C08E206DCCC1E5D8A0F8DBCF01D46 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mDC71816B8A88A167F396D550E922E9236155ECA8 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppChar* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppChar>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppChar* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_12, L_13, sizeof(Il2CppChar));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB16A8EC9CCDE68A166108BE32B6DDA7D7C88BC17 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4, sizeof(Il2CppChar));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m22E885FE905F1306DDE8000F155109F7F4987666 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = __this->____pointer;
		V_1 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>(L_1);
		V_0 = L_2;
		Il2CppChar* L_3 = V_0;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppChar*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = __this->____length;
		String_t* L_6;
		L_6 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)L_4, 0, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4, sizeof(Il2CppChar));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7, sizeof(Il2CppChar));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ReadOnlySpan_1_ToArray_m3CC38C41E9FB235D0C9D24033DE4D561B1017488 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mAFC53FF457D681D6B91A0C169D2EEEAB29625F7F (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m43FCB412B29F8C6C9215173C3D4A72DC006670DF (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m032061AD3999853660D069A9EA55DB865F8A30A1 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_12;
		L_12 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>(L_11);
		int32_t L_13 = ___1_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_14;
		L_14 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_12, L_13, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF12C4BAD5EBEFD740D783A0199A885174F3B99A9 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>((uint8_t*)L_1);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ReadOnlySpan_1_get_Item_mD5E2C74DADFFF2EB2013C093403217F643E3FDEA (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_2 = __this->____pointer;
		V_0 = L_2;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_5;
		L_5 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_3, L_4, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m68D6B223E56FE5CC9235A39AB8DE9FBC47859133 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_2 = ___0_destination;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3 = L_2.____pointer;
		V_0 = L_3;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_0 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mABACFEF143C915AAC252D2511FE39D713F095993 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_2 = ___0_destination;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3 = L_2.____pointer;
		V_1 = L_3;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_1));
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_1 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mB9CD291D96454CA0A23BB1E9C39EE497AAFD7D89 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B ReadOnlySpan_1_Slice_m837ADFC41A3283757D806263DCCF7F05FAAC286C (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_2 = __this->____pointer;
		V_0 = L_2;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_5;
		L_5 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_3, L_4, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B ReadOnlySpan_1_Slice_m43607F00E7BAB24EF955A2BC3D5A4F23EB19ECEE (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_0 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_8;
		L_8 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_6, L_7, sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ReadOnlySpan_1_ToArray_mECE9942E5C633C36CED10EE9B903F15E6B23305F (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_1;
		L_1 = Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_3 = (ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A*)(ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>(L_5);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_7 = __this->____pointer;
		V_0 = L_7;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mE7EF0D565949C53DA00C392FB82EBBF3F0C62204 (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m962F01CDE19CACEC7562C969E3FA432C9A506FBC (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m633345025A44899B1D6B3B67DDC6E032D4E4B3B1 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_12;
		L_12 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>(L_11);
		int32_t L_13 = ___1_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_14;
		L_14 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_12, L_13, sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5A5B3C790AD4E42DC6EDEA48B0D29E47501DC3C6 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_2;
		L_2 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>((uint8_t*)L_1);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ReadOnlySpan_1_get_Item_m6BDFC2A4D86CDB0F646B301A24BC419A669B9704 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_2 = __this->____pointer;
		V_0 = L_2;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_5;
		L_5 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_3, L_4, sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD48E9C4252FC88CDF405723646409C61631CFDCD (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_2 = ___0_destination;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3 = L_2.____pointer;
		V_0 = L_3;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_0 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mAF5D52A05AB954458A23F5ACD5E897042AFA2D3B (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_2 = ___0_destination;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3 = L_2.____pointer;
		V_1 = L_3;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_1));
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_1 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF9E6320B55655799993BE5B2BB07BADC41E61413 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF ReadOnlySpan_1_Slice_m61BB46FA0EDADBD25CF22190712072857D29AC46 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_2 = __this->____pointer;
		V_0 = L_2;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_5;
		L_5 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_3, L_4, sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF ReadOnlySpan_1_Slice_m2CEB62730124955C5F8EEFDF48A6E757EEB7BCA5 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_0 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_8;
		L_8 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_6, L_7, sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ReadOnlySpan_1_ToArray_m1BBC6D488C602F6741A91874B1FE889B2ADC0CAB (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_1;
		L_1 = Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_3 = (CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61*)(CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>(L_5);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_7 = __this->____pointer;
		V_0 = L_7;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m963C6BC056461AE1848F94FBAD5F8686C64C821D (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m2CB104DD7CC333E1E68A04D1DEC91802B8B7E257 (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4098D65E6BBC2BA630A548C16B84B48EDD8A3BF (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_12;
		L_12 = il2cpp_unsafe_as_ref<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B>(L_11);
		int32_t L_13 = ___1_start;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_14;
		L_14 = il2cpp_unsafe_add<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B,int32_t>(L_12, L_13, sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B));
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCEE03EA1C21BB24DC73A46B465EE1D04E3B7D22B (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_2;
		L_2 = il2cpp_unsafe_as_ref<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B>((uint8_t*)L_1);
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ReadOnlySpan_1_get_Item_m7A125B067FB443CD8FDC8566371E0447F3C6138F (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B,int32_t>(L_3, L_4, sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m7C4233C71F8E179C8722EE5CDD5454860E423291 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7DA42A78AA51399F6E2624EC951C4C5675A83DF4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 L_2 = ___0_destination;
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_3 = L_2.____pointer;
		V_0 = L_3;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m8F8A70A092F5A159FB14261A13A7C5FBB5787F82 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7DA42A78AA51399F6E2624EC951C4C5675A83DF4_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t6834048668549DB2E233F0E7E8E71F1E3AFDE712 L_2 = ___0_destination;
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_3 = L_2.____pointer;
		V_1 = L_3;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_1));
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_5 = __this->____pointer;
		V_1 = L_5;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m6A8FE05FEFB7E4D9F39AD377F7D38CE0683DE7B2 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 ReadOnlySpan_1_Slice_mE6F7FEF5269F67616751BEBF8BAFF8C1F5857BDC (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B,int32_t>(L_3, L_4, sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m47891B0EBECA0C6CBF5505295F2B0E603027A014_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 ReadOnlySpan_1_Slice_m3F56144D4C2C592B43D78C7B42F73A48A9E5177C (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_8;
		L_8 = il2cpp_unsafe_add<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B,int32_t>(L_6, L_7, sizeof(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m47891B0EBECA0C6CBF5505295F2B0E603027A014_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* ReadOnlySpan_1_ToArray_mAEEC9EB01051A837B254B70729B5B1B1F336EDB8 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_1;
		L_1 = Array_Empty_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m87CA399E64D82A02BCE81DF2F8F52AD65AC9BC25_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_3 = (EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1*)(EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_6;
		L_6 = il2cpp_unsafe_as_ref<EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B>(L_5);
		ByReference_1_tCB250A9F3C97CE952291FE2EB00C93049947EEF5 L_7 = __this->____pointer;
		V_0 = L_7;
		EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_mDFAF68DAF7C667016B41A5C085293991850D1D8C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA28D1F03418262EBD1FB9594CA7FB7FD70610212 (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m1E0EF80A7EE77059FD9DAA68BD8D6790279AE80E (ReadOnlySpan_1_t0FC2D16AF841FEB9AE14EC7F2D86B77F0D003744* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB0FC236D9E3748441AD25DDC3B692EA51BA6233A (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_12;
		L_12 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>(L_11);
		int32_t L_13 = ___1_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_14;
		L_14 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_12, L_13, sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0852AA20C81ECA081FB83A9EDDB3F1E66794F2BC (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_2;
		L_2 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>((uint8_t*)L_1);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ReadOnlySpan_1_get_Item_m6FF93DA90032CD75D75A2B9413FC9C7C989EEC19 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_2 = __this->____pointer;
		V_0 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_5;
		L_5 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_3, L_4, sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m950DB44591C9EDF481214225C635C41C9D6C4822 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_2 = ___0_destination;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3 = L_2.____pointer;
		V_0 = L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_0 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mE28997B1566C7D16DA39612A5B96C77D8729F19F (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_2 = ___0_destination;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3 = L_2.____pointer;
		V_1 = L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_1));
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_1 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m39E431536CAFB0586A83817A0D8934F342A77F48 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ReadOnlySpan_1_Slice_mF70146AF37D44B84C4A0A11375621CC608C0B05E (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_2 = __this->____pointer;
		V_0 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_5;
		L_5 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_3, L_4, sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 ReadOnlySpan_1_Slice_m99E30EBEBE3124057493D4338CB1EB24AE74C5C8 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_0 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_8;
		L_8 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_6, L_7, sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ReadOnlySpan_1_ToArray_mEEDDCFF19B7FF3D3231361BBE06198D8612EA390 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_1;
		L_1 = Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_3 = (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)(EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>(L_5);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_7 = __this->____pointer;
		V_0 = L_7;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m2773D8208EA7C89CB595446E96CE633046F24AEB (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m302AC96825FFAAED523A298F89F52C7973BF4303 (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1CC8B26430416B686554A6482D492EAEFEEF51F3 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_12;
		L_12 = il2cpp_unsafe_as_ref<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32>(L_11);
		int32_t L_13 = ___1_start;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_14;
		L_14 = il2cpp_unsafe_add<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32,int32_t>(L_12, L_13, sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32));
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBBD9B663DF23946ABDB0362F55E5460AF62636EE (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_2;
		L_2 = il2cpp_unsafe_as_ref<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32>((uint8_t*)L_1);
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* ReadOnlySpan_1_get_Item_mE2698C4D6F000B32A207D2CF0944F5F3CF0AD921 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32,int32_t>(L_3, L_4, sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mF0492FF80613669BE399A99FD0FB7C03C0B76E8C (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE30066A0C4D7876DED68538384FA5CC160C69D64_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 L_2 = ___0_destination;
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_3 = L_2.____pointer;
		V_0 = L_3;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m92A744C49631D9647E75ABABD41FD59EB3C1E621 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE30066A0C4D7876DED68538384FA5CC160C69D64_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBFB0B8ED6E219789174070F50BFF3D1D12DDADA4 L_2 = ___0_destination;
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_3 = L_2.____pointer;
		V_1 = L_3;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_1));
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_5 = __this->____pointer;
		V_1 = L_5;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mBE9318B2249AD978B9F06C7107CB99FBB27F16FF (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 ReadOnlySpan_1_Slice_m19B781349C743374B253C9C6D6B9CF0729157619 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32,int32_t>(L_3, L_4, sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m10A374622B0CBE7DF98D6204B69DB5AB8EBEDC48_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 ReadOnlySpan_1_Slice_m765EAD28F9EA0424C91BE5AFF53D864B23DEF250 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_8;
		L_8 = il2cpp_unsafe_add<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32,int32_t>(L_6, L_7, sizeof(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m10A374622B0CBE7DF98D6204B69DB5AB8EBEDC48_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* ReadOnlySpan_1_ToArray_mCA51B6748B301CAF804FAE141AB0EB24AD7301B9 (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_1;
		L_1 = Array_Empty_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m0C324743704C230D82B1D3F4A8A72DAECCD01F62_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_3 = (GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE*)(GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_6;
		L_6 = il2cpp_unsafe_as_ref<GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32>(L_5);
		ByReference_1_tDCD87F57A922EB5D677F348193F5D9E910764BA6 L_7 = __this->____pointer;
		V_0 = L_7;
		GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m83F98C10F75BBF5CBB456D86857C192E9B2D06B6(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF1CCAC7D6B3F02FED4609FDF35F79281F912CEED (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mEE92EAC535359994053B53C5675D8C885B32FD3D (ReadOnlySpan_1_t34988ADF8A190D8E783D3F6CEBB997ECB1625B60* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m86E3970C69674627ED6C25967D678931122287E1 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_12;
		L_12 = il2cpp_unsafe_as_ref<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B>(L_11);
		int32_t L_13 = ___1_start;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_14;
		L_14 = il2cpp_unsafe_add<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B,int32_t>(L_12, L_13, sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B));
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m911ECF7FE65D54DCAFE515EF9794FCB8DDC8288A (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_2;
		L_2 = il2cpp_unsafe_as_ref<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B>((uint8_t*)L_1);
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ReadOnlySpan_1_get_Item_m2C358E0E26ED8051C20E4ABBE02DA63B5EAE1D0B (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B,int32_t>(L_3, L_4, sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mB7327A5A9F38CAE934A524D89984932FE8789697 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m183BDBAC2D1A9253029D7DF02565C77C96404029_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E L_2 = ___0_destination;
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_3 = L_2.____pointer;
		V_0 = L_3;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mD534FCE53725A25145D3213369D47D4015144102 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m183BDBAC2D1A9253029D7DF02565C77C96404029_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t811A307E8A2376175E0D75B7D539482FEAFD8A2E L_2 = ___0_destination;
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_3 = L_2.____pointer;
		V_1 = L_3;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_1));
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_5 = __this->____pointer;
		V_1 = L_5;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m34E980693697251EFC24C659C1D5705117063674 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 ReadOnlySpan_1_Slice_mDD03BAFA5A929F1F2AD0D8A344DF50D4E25474E9 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B,int32_t>(L_3, L_4, sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mAEA18BE2EAFC93735C1D95BE4DB087870A3E109E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 ReadOnlySpan_1_Slice_m0CFB04ECE6D8905D4E3D08379519CED6A453D66A (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_8;
		L_8 = il2cpp_unsafe_add<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B,int32_t>(L_6, L_7, sizeof(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mAEA18BE2EAFC93735C1D95BE4DB087870A3E109E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* ReadOnlySpan_1_ToArray_mF5A1D406528E65CC75B480F1FB9D3DF5CF6B2705 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_1;
		L_1 = Array_Empty_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mE8D045B3FF593AAD4C1EC5FD9B669AAC4C2A5BDE_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_3 = (GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C*)(GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_6;
		L_6 = il2cpp_unsafe_as_ref<GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B>(L_5);
		ByReference_1_t1FB478A1590BD174302E7D16B53DB2C4E3AAFF70 L_7 = __this->____pointer;
		V_0 = L_7;
		GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mD7A052D9C9023478CCFECFE57747903B49AA2E3F(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m9F11B139CAB17457E2E79A811238E14DB8FDABD4 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mAED86602E94F80F9002307F0A38D1F6ECFC88F27 (ReadOnlySpan_1_t6F0D0D111118399440FC3F73DE04FDA0417DEA95* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFE87471940147B278D12A2355E11C7D980AC1B0C (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int16_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<int16_t>(L_11);
		int32_t L_13 = ___1_start;
		int16_t* L_14;
		L_14 = il2cpp_unsafe_add<int16_t,int32_t>(L_12, L_13, sizeof(int16_t));
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBB906A8DC40FCE2EA6D57AAB7858EF86646730E3 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int16_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int16_t>((uint8_t*)L_1);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* ReadOnlySpan_1_get_Item_m44C6A4B4B788A3F23717EB74EDB36CE208A123A2 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_2 = __this->____pointer;
		V_0 = L_2;
		int16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int16_t* L_5;
		L_5 = il2cpp_unsafe_add<int16_t,int32_t>(L_3, L_4, sizeof(int16_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4A6E02EC83CE0119C10C893AE40955EBC3918530 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, Span_1_tC1B695440A1567664C2665D76D5614739FDF453D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_2 = ___0_destination;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3 = L_2.____pointer;
		V_0 = L_3;
		int16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_0 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mABBB33E20CA93E4BBC4CE3849F0EB330572948FA (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, Span_1_tC1B695440A1567664C2665D76D5614739FDF453D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4739DD3D444025ADF00780C8FA6A518C9EF8763C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC1B695440A1567664C2665D76D5614739FDF453D L_2 = ___0_destination;
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_3 = L_2.____pointer;
		V_1 = L_3;
		int16_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_1 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mBA61FF323DDCF6B08C05245475AD6EB636EC6B42 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ReadOnlySpan_1_Slice_m8612055BCD5729838EAE23DE09D75FE099EABAC1 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_2 = __this->____pointer;
		V_0 = L_2;
		int16_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int16_t* L_5;
		L_5 = il2cpp_unsafe_add<int16_t,int32_t>(L_3, L_4, sizeof(int16_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 ReadOnlySpan_1_Slice_mAE70B2654485544B33B78492139D7FC41FE63A2F (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_5 = __this->____pointer;
		V_0 = L_5;
		int16_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int16_t* L_8;
		L_8 = il2cpp_unsafe_add<int16_t,int32_t>(L_6, L_7, sizeof(int16_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m90A46D9F599ED28AA435B1FA5CA198862515FC9E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ReadOnlySpan_1_ToArray_m84EAC09AB460EF0C197907F71F1092CDB3C4F618 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1;
		L_1 = Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int16_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int16_t>(L_5);
		ByReference_1_t684A5DEB656E6DED2A2A46C6F5AA6B296984D850 L_7 = __this->____pointer;
		V_0 = L_7;
		int16_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int16_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA91EE2625B323F9F80BCC7CE1FDFF070E75BCA17 (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m703901AD4E8EF20C6648CA3159A0441FC0D46A7E (ReadOnlySpan_1_t43371A70E409718817933691123A1C2EEF874E71* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75533883DBEB84184F1D12F3B3B7E355C73B8E6A (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int32_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<int32_t>(L_11);
		int32_t L_13 = ___1_start;
		int32_t* L_14;
		L_14 = il2cpp_unsafe_add<int32_t,int32_t>(L_12, L_13, sizeof(int32_t));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m002824E5A4D3C902519D80E02AE5E0953C4612D4 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int32_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int32_t>((uint8_t*)L_1);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ReadOnlySpan_1_get_Item_mCBC5F0FABD8DDD286D8C4A8A4642667D57F03FDC (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4, sizeof(int32_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m6BFC735A52A9BD567CDB9BF88E6C14CCBACF7C31 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_0 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m35C8CC70EDA895664220562932C2A81DD93CA6F8 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m87AB3C694F2E4802F14D006F21C020816045285F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_2 = ___0_destination;
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_3 = L_2.____pointer;
		V_1 = L_3;
		int32_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_1 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF5627E75DD87A05D82D8C33FA7FA5F063C33DAB2 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ReadOnlySpan_1_Slice_m443360A96312A8548DCAAEED412F39FDDC82B987 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_2 = __this->____pointer;
		V_0 = L_2;
		int32_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int32_t* L_5;
		L_5 = il2cpp_unsafe_add<int32_t,int32_t>(L_3, L_4, sizeof(int32_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 ReadOnlySpan_1_Slice_m3B1FBAC8160374A2C197C9735069B0A620A62A23 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_5 = __this->____pointer;
		V_0 = L_5;
		int32_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7, sizeof(int32_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mA0D85386F3D3AAF59FC429C4A2A9E7CD6B7DCF2A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ReadOnlySpan_1_ToArray_m750D7BEFA43F3FEAC24A67EA3D9FC30725B68962 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int32_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int32_t>(L_5);
		ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 L_7 = __this->____pointer;
		V_0 = L_7;
		int32_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int32_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m7E853E9381AC068A39F5E774C8BCDFE597B99E76 (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m05C07E0A62BA692216B91BA053CA22025545740B (ReadOnlySpan_1_t6190994DF094ABDFA6908C2C3FB347457E8E4282* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF8F22F26B146C5C990D32278CFB7E765FDDBC441 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		intptr_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<intptr_t>(L_11);
		int32_t L_13 = ___1_start;
		intptr_t* L_14;
		L_14 = il2cpp_unsafe_add<intptr_t,int32_t>(L_12, L_13, sizeof(intptr_t));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mBD96856012B652A630AFD761601AEB771863D0B1 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>((uint8_t*)L_1);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* ReadOnlySpan_1_get_Item_mEC10C2317624D8CA09EDF2C9E659AB57932BB9DA (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		intptr_t* L_5;
		L_5 = il2cpp_unsafe_add<intptr_t,int32_t>(L_3, L_4, sizeof(intptr_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mB801D5F5515FFEF4546460DBACA99CCD2A75FEB9 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_2 = ___0_destination;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3 = L_2.____pointer;
		V_0 = L_3;
		intptr_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_0 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m6813DD86685DAE335D3BD50C3CDA693F9A9F4733 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_2 = ___0_destination;
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_3 = L_2.____pointer;
		V_1 = L_3;
		intptr_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_1 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m0A703FE2A54B910FB8EEF6F8AF4EC74EB9CDF621 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC ReadOnlySpan_1_Slice_mED80CA60DF5897CF915B1128A33D89E928FCA5AC (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_2 = __this->____pointer;
		V_0 = L_2;
		intptr_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		intptr_t* L_5;
		L_5 = il2cpp_unsafe_add<intptr_t,int32_t>(L_3, L_4, sizeof(intptr_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC ReadOnlySpan_1_Slice_m6D22D871F5F22BA2311F321A5FD87B42C0EEB3AA (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_5 = __this->____pointer;
		V_0 = L_5;
		intptr_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		intptr_t* L_8;
		L_8 = il2cpp_unsafe_add<intptr_t,int32_t>(L_6, L_7, sizeof(intptr_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mD019D0961769EF3E1F4E73B5E8AB46E03F706D88_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ReadOnlySpan_1_ToArray_mA14DCD9A120C33C3224D99F7E3590B3E5989A7ED (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_1;
		L_1 = Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_3 = (IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)(IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		intptr_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<intptr_t>(L_5);
		ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 L_7 = __this->____pointer;
		V_0 = L_7;
		intptr_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(intptr_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF7C7BBFCC2EF39F67718490233F703EC7289C845 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m4D688355A0763268E136860EE331E2CB666A2C47 (ReadOnlySpan_1_t5ABA69DB1374E0A938EDAFD0CCB02440A9926FBC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5B74F6F71EA9A6904DDB44EDAE0433B97B1E0B08 (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_12;
		L_12 = il2cpp_unsafe_as_ref<InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D>(L_11);
		int32_t L_13 = ___1_start;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_14;
		L_14 = il2cpp_unsafe_add<InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D,int32_t>(L_12, L_13, sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D));
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD700DA6B32B8568A8B40F1C25E8C43FB6CCB53F2 (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_2;
		L_2 = il2cpp_unsafe_as_ref<InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D>((uint8_t*)L_1);
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ReadOnlySpan_1_get_Item_m30BA99608ABE58F8456EEB4B33F4E133BF3DA753 (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_2 = __this->____pointer;
		V_0 = L_2;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_5;
		L_5 = il2cpp_unsafe_add<InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D,int32_t>(L_3, L_4, sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mCFC12A24EB171BFC2F3CB2EADE6168C6460641A7 (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, Span_1_t1013F208A58E5E32A4D18DEC19F9A98465C58B16 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m26D39C1CBA7A073C6608FAC3CC2CB966317877B0_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t1013F208A58E5E32A4D18DEC19F9A98465C58B16 L_2 = ___0_destination;
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_3 = L_2.____pointer;
		V_0 = L_3;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D, (Il2CppByReference*)(&V_0));
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_5 = __this->____pointer;
		V_0 = L_5;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m00B24155C8BCD589BA2049C5362D10B7BC551821(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mCDE72BC3AD814B1D0FC15459F8BDCCCF53E275BC (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, Span_1_t1013F208A58E5E32A4D18DEC19F9A98465C58B16 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m26D39C1CBA7A073C6608FAC3CC2CB966317877B0_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t1013F208A58E5E32A4D18DEC19F9A98465C58B16 L_2 = ___0_destination;
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_3 = L_2.____pointer;
		V_1 = L_3;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D, (Il2CppByReference*)(&V_1));
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_5 = __this->____pointer;
		V_1 = L_5;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m00B24155C8BCD589BA2049C5362D10B7BC551821(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m35D1AC9074C9F8439F9948891ACFA6C7029CE6DB (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE ReadOnlySpan_1_Slice_mFFA9F7A7FAE956B8C727AF4DB237E3D38D2D3FD7 (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_2 = __this->____pointer;
		V_0 = L_2;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_5;
		L_5 = il2cpp_unsafe_add<InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D,int32_t>(L_3, L_4, sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mF9A417640E3DAD6919A1EFCCC307620D5D3801DD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE ReadOnlySpan_1_Slice_mA438A8CBB483720BA462157FF2F112A7FF38E408 (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_5 = __this->____pointer;
		V_0 = L_5;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_8;
		L_8 = il2cpp_unsafe_add<InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D,int32_t>(L_6, L_7, sizeof(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mF9A417640E3DAD6919A1EFCCC307620D5D3801DD_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* ReadOnlySpan_1_ToArray_m35425C56154BCFF80655A77C0D9F35BC196F536D (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* L_1;
		L_1 = Array_Empty_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_mB158970D4273B39753506A6ECB7585D0421BDA9B_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* L_3 = (InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D*)(InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_6;
		L_6 = il2cpp_unsafe_as_ref<InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D>(L_5);
		ByReference_1_t16E4BE1869177B7BDDA541F9DA237C0DD1A81DEB L_7 = __this->____pointer;
		V_0 = L_7;
		InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_m00B24155C8BCD589BA2049C5362D10B7BC551821(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m1991016556735B596784DDE11A3E4C6E0C1410E0 (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mE6C9F8F2FD0C92672666983F9388FE6CD62B7CF4 (ReadOnlySpan_1_t43A3B136BF4B7E3EFB48330BD6501CB08FBF8FAE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDA41F498DEFBEB381D1048C114287ECCF101226D (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_12;
		L_12 = il2cpp_unsafe_as_ref<InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73>(L_11);
		int32_t L_13 = ___1_start;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_14;
		L_14 = il2cpp_unsafe_add<InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73,int32_t>(L_12, L_13, sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73));
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m21FB0D17E6C7ADBC31FEBE53178563E4EBA7B0DB (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_2;
		L_2 = il2cpp_unsafe_as_ref<InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73>((uint8_t*)L_1);
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ReadOnlySpan_1_get_Item_m70183A5954FF2D8106C00979B8BC713A48C73D50 (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_2 = __this->____pointer;
		V_0 = L_2;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_5;
		L_5 = il2cpp_unsafe_add<InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73,int32_t>(L_3, L_4, sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m5B8F9FF04372E659F89B1CF12925B97FCDB1F02E (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, Span_1_tAFD876B17AF4D669C6A7F2BD60D9E2F6236FFB95 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m84E346C64DFC0DF7E9150B32781D35B9142ED299_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tAFD876B17AF4D669C6A7F2BD60D9E2F6236FFB95 L_2 = ___0_destination;
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_3 = L_2.____pointer;
		V_0 = L_3;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73, (Il2CppByReference*)(&V_0));
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_5 = __this->____pointer;
		V_0 = L_5;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF00F0A4AF9CB7D449D3687DD0C6DF3960F23C8E1(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m18866C55CFA2BCF4F40F2AA11E7D0B6F3B4545DC (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, Span_1_tAFD876B17AF4D669C6A7F2BD60D9E2F6236FFB95 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m84E346C64DFC0DF7E9150B32781D35B9142ED299_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tAFD876B17AF4D669C6A7F2BD60D9E2F6236FFB95 L_2 = ___0_destination;
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_3 = L_2.____pointer;
		V_1 = L_3;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73, (Il2CppByReference*)(&V_1));
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_5 = __this->____pointer;
		V_1 = L_5;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF00F0A4AF9CB7D449D3687DD0C6DF3960F23C8E1(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m67732EF3016301E706D58C959FF17444CBE7621B (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB ReadOnlySpan_1_Slice_m5FF17FAFFBDBD2E6CB654AD22E61DC684383180C (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_2 = __this->____pointer;
		V_0 = L_2;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_5;
		L_5 = il2cpp_unsafe_add<InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73,int32_t>(L_3, L_4, sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mD39AB7E952AB6C102F7DD1179B4F6F0F13F09A98_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB ReadOnlySpan_1_Slice_m6B80B8978471DFB75E0BE0B2F50A41B6853FCD5F (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_5 = __this->____pointer;
		V_0 = L_5;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_8;
		L_8 = il2cpp_unsafe_add<InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73,int32_t>(L_6, L_7, sizeof(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mD39AB7E952AB6C102F7DD1179B4F6F0F13F09A98_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* ReadOnlySpan_1_ToArray_mB7E947CCA5FD46D126C847F9AF53D231C70F2A8E (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* L_1;
		L_1 = Array_Empty_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m84564B99B54C40C147D3A88036CC3D9735B5BCB2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* L_3 = (InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B*)(InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_6;
		L_6 = il2cpp_unsafe_as_ref<InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73>(L_5);
		ByReference_1_t4FD5860F438CCE3ACB8B42A773354A29FACD82B4 L_7 = __this->____pointer;
		V_0 = L_7;
		InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_mF00F0A4AF9CB7D449D3687DD0C6DF3960F23C8E1(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mC148F83571A400A45ABBC03FC8805824468FB886 (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mADED68C7E5242D5D115C408EAE6E860212B362FB (ReadOnlySpan_1_t36A06A009243E4911078277AF651ABBC2A454EFB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1F2F8CD6487D3E2771F02FF7E668D31204B5961C (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_12;
		L_12 = il2cpp_unsafe_as_ref<InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF>(L_11);
		int32_t L_13 = ___1_start;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_14;
		L_14 = il2cpp_unsafe_add<InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF,int32_t>(L_12, L_13, sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF));
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2BDF4AAB42B9F66C471D57750D74666EAE8800DD (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_2;
		L_2 = il2cpp_unsafe_as_ref<InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF>((uint8_t*)L_1);
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ReadOnlySpan_1_get_Item_mBDC78C1FBD3B722153179F82BAEC1D4BD7B90C72 (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_2 = __this->____pointer;
		V_0 = L_2;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_5;
		L_5 = il2cpp_unsafe_add<InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF,int32_t>(L_3, L_4, sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mF8573B11C2DAA1A13530328AFDA928FD2E71B49D (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, Span_1_t526D7626CCDA73BF8F4FE1D375A89DCACDCACDBB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4EDAE00E321B738DEA5DF5F96ACA09E5D2078FA2_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t526D7626CCDA73BF8F4FE1D375A89DCACDCACDBB L_2 = ___0_destination;
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_3 = L_2.____pointer;
		V_0 = L_3;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF, (Il2CppByReference*)(&V_0));
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_5 = __this->____pointer;
		V_0 = L_5;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mB4E2E23C09C3885CB95CD011199F57E9BC79F632(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mFE898FC48E37A2475D1041AC36630AF90AF6BF2B (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, Span_1_t526D7626CCDA73BF8F4FE1D375A89DCACDCACDBB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4EDAE00E321B738DEA5DF5F96ACA09E5D2078FA2_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t526D7626CCDA73BF8F4FE1D375A89DCACDCACDBB L_2 = ___0_destination;
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_3 = L_2.____pointer;
		V_1 = L_3;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF, (Il2CppByReference*)(&V_1));
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_5 = __this->____pointer;
		V_1 = L_5;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mB4E2E23C09C3885CB95CD011199F57E9BC79F632(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m371655A3268D81D733EBA2FA08E04AEB6C3A091F (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B ReadOnlySpan_1_Slice_m17AEFFAC61F0A5C416C0F7A515C16C73BAC96787 (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_2 = __this->____pointer;
		V_0 = L_2;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_5;
		L_5 = il2cpp_unsafe_add<InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF,int32_t>(L_3, L_4, sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mBD10718D20DDB4962E83CE6396D38094E7009927_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B ReadOnlySpan_1_Slice_m3D6F3706B5335BD0CAC548330DC456C27898F440 (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_5 = __this->____pointer;
		V_0 = L_5;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_8;
		L_8 = il2cpp_unsafe_add<InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF,int32_t>(L_6, L_7, sizeof(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mBD10718D20DDB4962E83CE6396D38094E7009927_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* ReadOnlySpan_1_ToArray_m8A5C1CBF21345A8D8812491B3EAB8C9613B1994E (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* L_1;
		L_1 = Array_Empty_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m3CC4AD8964A97157D964C70F4FAD0DEB0DFB6F31_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* L_3 = (InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87*)(InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_6;
		L_6 = il2cpp_unsafe_as_ref<InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF>(L_5);
		ByReference_1_tE66AAC39B4B229B1B6BA5B9D6754546E10481877 L_7 = __this->____pointer;
		V_0 = L_7;
		InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_mB4E2E23C09C3885CB95CD011199F57E9BC79F632(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA49025FAE085B9D1122D577FD8595E8177184F0E (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m8DA132541B8E15814D931389432A134D9FB137E6 (ReadOnlySpan_1_t943F951977750CB73B0ECDF14E8DD2267B2CF18B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m41FAC4E7D5792908201EB35DC3D43C0E5F1CAB54 (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_12;
		L_12 = il2cpp_unsafe_as_ref<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08>(L_11);
		int32_t L_13 = ___1_start;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_14;
		L_14 = il2cpp_unsafe_add<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08,int32_t>(L_12, L_13, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9BEB1434641CB61F7AE0B41639E4EBF3FCD7818E (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2;
		L_2 = il2cpp_unsafe_as_ref<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08>((uint8_t*)L_1);
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ReadOnlySpan_1_get_Item_mF87C5D67712971FA355AF838AC4BA5A874863856 (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_2 = __this->____pointer;
		V_0 = L_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_5;
		L_5 = il2cpp_unsafe_add<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08,int32_t>(L_3, L_4, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m25AA2AD59AA9323D76CBA327A0AAF9CABA1F6C25 (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, Span_1_t8206B553B7E881F7BC4BEA2B12509D008E524211 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m0BE6EA932B404A54A3AF19C9654ED2611196FAE5_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t8206B553B7E881F7BC4BEA2B12509D008E524211 L_2 = ___0_destination;
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_3 = L_2.____pointer;
		V_0 = L_3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, (Il2CppByReference*)(&V_0));
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_5 = __this->____pointer;
		V_0 = L_5;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m40ED3A6795E32BEAA8A560A1E37FDA01485E820F (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, Span_1_t8206B553B7E881F7BC4BEA2B12509D008E524211 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m0BE6EA932B404A54A3AF19C9654ED2611196FAE5_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t8206B553B7E881F7BC4BEA2B12509D008E524211 L_2 = ___0_destination;
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_3 = L_2.____pointer;
		V_1 = L_3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, (Il2CppByReference*)(&V_1));
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_5 = __this->____pointer;
		V_1 = L_5;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m6E518F069FAF184BFF007A3ACF86BB321B947E4C (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB ReadOnlySpan_1_Slice_m45BB8A11E9A4443F4044DD5504ADEA915169D935 (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_2 = __this->____pointer;
		V_0 = L_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_5;
		L_5 = il2cpp_unsafe_add<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08,int32_t>(L_3, L_4, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m5146D98DC32810D3BC61D690968758CF2711417A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB ReadOnlySpan_1_Slice_m349B482DB1BB55DF76152AC6ABE71D4D4CB714B7 (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_5 = __this->____pointer;
		V_0 = L_5;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_8;
		L_8 = il2cpp_unsafe_add<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08,int32_t>(L_6, L_7, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m5146D98DC32810D3BC61D690968758CF2711417A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ReadOnlySpan_1_ToArray_m30F2C460A5F8D22FFFED95C4A310EAD3048FFCEA (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1;
		L_1 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_6;
		L_6 = il2cpp_unsafe_as_ref<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08>(L_5);
		ByReference_1_tBB6AAE59AAE4993D4FA874B4F58E0E2C22E6CE90 L_7 = __this->____pointer;
		V_0 = L_7;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mB738A25B4829E397819582DD6EA31369D61B4FB7 (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mB12678AA6042E87F9AB7E445D5729135FBE7FD57 (ReadOnlySpan_1_t09FC5325A7B15784D246B5B71F829AB1C98B41DB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7F2AEA9F53C4D087E44B06CD077A8ADA8DEC4891 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_12;
		L_12 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>(L_11);
		int32_t L_13 = ___1_start;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_14;
		L_14 = il2cpp_unsafe_add<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,int32_t>(L_12, L_13, sizeof(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0));
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4C58ECE9BBDE5718241E236D3A8F4A1B4B35785 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_2;
		L_2 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>((uint8_t*)L_1);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ReadOnlySpan_1_get_Item_m0EA17953CB790A0B73A361EEDC5FD740EE1E79DD (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_2 = __this->____pointer;
		V_0 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_5;
		L_5 = il2cpp_unsafe_add<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,int32_t>(L_3, L_4, sizeof(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m49A400F933124DD4B5922129D4CE89610D259678 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_2 = ___0_destination;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_3 = L_2.____pointer;
		V_0 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5 = __this->____pointer;
		V_0 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mA1FC151D5D3DC244DBE1B613C2C8F7781F40D3A8 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m28BDF5A49331487719565DC19BFA707ED5950E86_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC7A225901F331E7580919F05D79088FB2CCC7382 L_2 = ___0_destination;
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_3 = L_2.____pointer;
		V_1 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_1));
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5 = __this->____pointer;
		V_1 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mC705E15A60449C1BBA818B70C692EB745DFDE2A1 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654 ReadOnlySpan_1_Slice_mF9405C86C3931B7024D2E7483C853A90729EB449 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_2 = __this->____pointer;
		V_0 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_5;
		L_5 = il2cpp_unsafe_add<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,int32_t>(L_3, L_4, sizeof(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m71967E3A96F8CD633AAD49AD447C6047FA04982E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654 ReadOnlySpan_1_Slice_mEB60C3DAA98205B15CC61BEC9DD63DFE329269E4 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_5 = __this->____pointer;
		V_0 = L_5;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_8;
		L_8 = il2cpp_unsafe_add<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0,int32_t>(L_6, L_7, sizeof(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m71967E3A96F8CD633AAD49AD447C6047FA04982E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ReadOnlySpan_1_ToArray_m30FE31820F5256F9FB83DDAD4992DF914501E58A (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1;
		L_1 = Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_6;
		L_6 = il2cpp_unsafe_as_ref<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>(L_5);
		ByReference_1_t068DA54AE1008634BA0DE7F11F5D6D1A9090B562 L_7 = __this->____pointer;
		V_0 = L_7;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF480FDBF78DEF9146DB44D3E128F2AFBCD80CAA6 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m2E18A48775FB215EDB3AD0EA6E697E61280BCCC0 (ReadOnlySpan_1_t11F93CBB61FADE985848CEBC0B966EC98BCD1654* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7D7E5CB87B146A6E5BA6C6235999A9DD361747FD (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_12;
		L_12 = il2cpp_unsafe_as_ref<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21>(L_11);
		int32_t L_13 = ___1_start;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_14;
		L_14 = il2cpp_unsafe_add<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21,int32_t>(L_12, L_13, sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2653CE424291D47290315F3E9F9E8587C26C62F1 (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_2;
		L_2 = il2cpp_unsafe_as_ref<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21>((uint8_t*)L_1);
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ReadOnlySpan_1_get_Item_m40D6769FE4E64B894FE2B0C1B5225154CE508D6B (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_2 = __this->____pointer;
		V_0 = L_2;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_5;
		L_5 = il2cpp_unsafe_add<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21,int32_t>(L_3, L_4, sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mB5A40680770B2CD4961F86F38D068CA8405FDD98 (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, Span_1_t1C480FE0F01F7D2528DC88B50B631D7D2C0A4859 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m67C4FD7A514561C3A82294F8A06BCAC4AC2DC06D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t1C480FE0F01F7D2528DC88B50B631D7D2C0A4859 L_2 = ___0_destination;
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_3 = L_2.____pointer;
		V_0 = L_3;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, (Il2CppByReference*)(&V_0));
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_5 = __this->____pointer;
		V_0 = L_5;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mD605F6C710FE7D6636BD896A35F34E890599D67C (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, Span_1_t1C480FE0F01F7D2528DC88B50B631D7D2C0A4859 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m67C4FD7A514561C3A82294F8A06BCAC4AC2DC06D_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t1C480FE0F01F7D2528DC88B50B631D7D2C0A4859 L_2 = ___0_destination;
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_3 = L_2.____pointer;
		V_1 = L_3;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, (Il2CppByReference*)(&V_1));
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_5 = __this->____pointer;
		V_1 = L_5;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m6CC7C910573E305FDE82ACE46C4044DA5307A419 (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3 ReadOnlySpan_1_Slice_mF6351A4EEB09A25B011879D9639AD92EACFEE3A5 (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_2 = __this->____pointer;
		V_0 = L_2;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_5;
		L_5 = il2cpp_unsafe_add<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21,int32_t>(L_3, L_4, sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mDF073225F55C4D3B281FEC5A6065C0A9B553F0C4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3 ReadOnlySpan_1_Slice_m7077B3819C3566C0BB0D1E2F588C25EDEC23140A (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_5 = __this->____pointer;
		V_0 = L_5;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_8;
		L_8 = il2cpp_unsafe_add<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21,int32_t>(L_6, L_7, sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mDF073225F55C4D3B281FEC5A6065C0A9B553F0C4_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* ReadOnlySpan_1_ToArray_mC1AB7158022002AF2189765EDABB5A571A40BA2A (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* L_1;
		L_1 = Array_Empty_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mD7C4C67D28BC2015E6AEAC2EB631C28550B6F876_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* L_3 = (LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713*)(LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_6;
		L_6 = il2cpp_unsafe_as_ref<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21>(L_5);
		ByReference_1_tF175BEA1ABD70858B0AC7DEFE9AE62432BCD42B2 L_7 = __this->____pointer;
		V_0 = L_7;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m92AA5EDB4C280DCAA64BB2620984C9C793792AA8 (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m7FDBAB88402E820FFCB8369EE3D10FB7D835AB6A (ReadOnlySpan_1_t6CD01B4E76D454970D5F92F708BC1B572E37BBC3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m94C662286E6962E7D0D2333BE505C17AB72B0239 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_12;
		L_12 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>(L_11);
		int32_t L_13 = ___1_start;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_14;
		L_14 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_12, L_13, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD401F06AACB9C2E3DDC1AB8782A8F7431A118B6A (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2;
		L_2 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>((uint8_t*)L_1);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ReadOnlySpan_1_get_Item_m0D20F997B134C148B963EEDD151E0F7FEAC81190 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_2 = __this->____pointer;
		V_0 = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5;
		L_5 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_3, L_4, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mBEB4E7A6C63F2B246639E3402C87CCFD288C5534 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_2 = ___0_destination;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_3 = L_2.____pointer;
		V_0 = L_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5 = __this->____pointer;
		V_0 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m3C372043E8A85A1C121A1C158306C2F08C77079D (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m44BC17B10EB59AF177037EEE357C5B0D64F58100_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9F95E811A3D2FBF2143BB5A7415651A944B4610E L_2 = ___0_destination;
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_3 = L_2.____pointer;
		V_1 = L_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_1));
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5 = __this->____pointer;
		V_1 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m57B91A65E5D48EBF99C51CB163DE55D2CD669706 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 ReadOnlySpan_1_Slice_mCD174D7CBF628C626E6118EBFF41B5DC55970747 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_2 = __this->____pointer;
		V_0 = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5;
		L_5 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_3, L_4, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m54AF9B0B6187D8384ECFF0F000CACF71B3008935_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 ReadOnlySpan_1_Slice_m0090A2CBA117085C2C50EFABA5D96581C4531A92 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_5 = __this->____pointer;
		V_0 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8;
		L_8 = il2cpp_unsafe_add<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6,int32_t>(L_6, L_7, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m54AF9B0B6187D8384ECFF0F000CACF71B3008935_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ReadOnlySpan_1_ToArray_m9859C1A1D2470ABF1D96E8E708CF296BE2E18F56 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1;
		L_1 = Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6;
		L_6 = il2cpp_unsafe_as_ref<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>(L_5);
		ByReference_1_t2629B0FF851CCDE5AAD5D6885CF50C091C92AAED L_7 = __this->____pointer;
		V_0 = L_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m8EF761A7114424405AD04A8FA87345A7FDE720C2 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m2081F8BE566F36B0CB08DCCF55F91361EEF31285 (ReadOnlySpan_1_tAAA896E4257343170F288E2064B78AF8EF5B5F48* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3CFCE8964294FCACC0DD0A8D8BC21E0E85294EBA (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_12;
		L_12 = il2cpp_unsafe_as_ref<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>(L_11);
		int32_t L_13 = ___1_start;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_14;
		L_14 = il2cpp_unsafe_add<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960,int32_t>(L_12, L_13, sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960));
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFC63B7B7E88603A24996B4DB3282273ED20FA796 (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_2;
		L_2 = il2cpp_unsafe_as_ref<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>((uint8_t*)L_1);
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ReadOnlySpan_1_get_Item_m36E8D6DB02975CC87328189DFD94DF5D458B6E8D (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_2 = __this->____pointer;
		V_0 = L_2;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_5;
		L_5 = il2cpp_unsafe_add<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960,int32_t>(L_3, L_4, sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4EE62B66789720EE4987585D923A0A9CCB86B860 (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, Span_1_t30A3A2BC2768BDD7E400373ADDCD30106936BF43 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7A2FFCD20AEBD3466DB2856E294D42357CF2FE69_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t30A3A2BC2768BDD7E400373ADDCD30106936BF43 L_2 = ___0_destination;
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_3 = L_2.____pointer;
		V_0 = L_3;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_5 = __this->____pointer;
		V_0 = L_5;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m9C86438FA0B693C92A0FE8538494B6AF41E489CD (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, Span_1_t30A3A2BC2768BDD7E400373ADDCD30106936BF43 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7A2FFCD20AEBD3466DB2856E294D42357CF2FE69_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t30A3A2BC2768BDD7E400373ADDCD30106936BF43 L_2 = ___0_destination;
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_3 = L_2.____pointer;
		V_1 = L_3;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_5 = __this->____pointer;
		V_1 = L_5;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m10E389909486B370A0FD20EAC575A5156AD82434 (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9 ReadOnlySpan_1_Slice_mC9CF5BD38E7E7E3AD9874CCB940FB3BE6140EFB3 (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_2 = __this->____pointer;
		V_0 = L_2;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_5;
		L_5 = il2cpp_unsafe_add<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960,int32_t>(L_3, L_4, sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m14D1465F766CC9E4A9FF41814736CE45D277C02D_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9 ReadOnlySpan_1_Slice_m8ACF1C5992B2B22DC8D402A07F2AB480A11BC540 (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_5 = __this->____pointer;
		V_0 = L_5;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_8;
		L_8 = il2cpp_unsafe_add<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960,int32_t>(L_6, L_7, sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m14D1465F766CC9E4A9FF41814736CE45D277C02D_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* ReadOnlySpan_1_ToArray_m5C5B8039C55DE85190BD2DC2B4072BBD20C0E4D8 (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* L_1;
		L_1 = Array_Empty_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m171C76990EAD2F2943A87BABB79B20678A3EB156_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* L_3 = (ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B*)(ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_6;
		L_6 = il2cpp_unsafe_as_ref<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>(L_5);
		ByReference_1_t9C2CA09191C52E9FFB042B1F0AA66B5423D8DBA0 L_7 = __this->____pointer;
		V_0 = L_7;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mF4B52353EB7CCF51AD7170EBCAEDA5219E2876CD (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m76CC98354BDF6F304617A60EB505D6FC90DA2312 (ReadOnlySpan_1_t49C05B73EC3A73D83F2DA4236EF84335E03063B9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m846517CDED794A8CAB63F096EA37EE3BE3560BC5 (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_12;
		L_12 = il2cpp_unsafe_as_ref<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>(L_11);
		int32_t L_13 = ___1_start;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_14;
		L_14 = il2cpp_unsafe_add<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C,int32_t>(L_12, L_13, sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C));
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4AAF8969A47DCD5E100316B15B562EB7F177DC10 (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_2;
		L_2 = il2cpp_unsafe_as_ref<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>((uint8_t*)L_1);
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ReadOnlySpan_1_get_Item_mE0094E19614620F0CA04381CED69E3602F065689 (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_2 = __this->____pointer;
		V_0 = L_2;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_5;
		L_5 = il2cpp_unsafe_add<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C,int32_t>(L_3, L_4, sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mC79F5FB6CA0D49E4473B8B76AC6E39B2AAE82886 (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m382D9A80197EEF760AE971BA67861E5F2FC2FDE1_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 L_2 = ___0_destination;
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_3 = L_2.____pointer;
		V_0 = L_3;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_0));
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_5 = __this->____pointer;
		V_0 = L_5;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m0B6A00E95AAC2D55808BF71CEE567CFBBC07FB5B (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m382D9A80197EEF760AE971BA67861E5F2FC2FDE1_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t7C6A40A7633287607E27FAFA675B7DBCED97B1F6 L_2 = ___0_destination;
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_3 = L_2.____pointer;
		V_1 = L_3;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_1));
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_5 = __this->____pointer;
		V_1 = L_5;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mE9DA6414E023255DB497CBD193D6A4933B6D0F7A (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44 ReadOnlySpan_1_Slice_mF310151E214DF955B0AE71E2DA11E4CE50EAE682 (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_2 = __this->____pointer;
		V_0 = L_2;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_5;
		L_5 = il2cpp_unsafe_add<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C,int32_t>(L_3, L_4, sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mBCDA11006EEBB02A0F8C8AD5D31AEB13BC8918A4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44 ReadOnlySpan_1_Slice_mFCD93D79282EBF790BFA4B7C14C1CEF7651BF652 (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_5 = __this->____pointer;
		V_0 = L_5;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_8;
		L_8 = il2cpp_unsafe_add<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C,int32_t>(L_6, L_7, sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mBCDA11006EEBB02A0F8C8AD5D31AEB13BC8918A4_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ReadOnlySpan_1_ToArray_m2C41C77443D3F7D1397ADB180BAA962561C979FD (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_1;
		L_1 = Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_3 = (PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE*)(PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_6;
		L_6 = il2cpp_unsafe_as_ref<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>(L_5);
		ByReference_1_t04F2D3470E0FCAD03955746F59E5B4B2142B3B35 L_7 = __this->____pointer;
		V_0 = L_7;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m5D09BB63DF644AF07F3A7860727B6AB794ED13E2 (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mA048750F7068E46AF0325FFE96EF3377FB1E3911 (ReadOnlySpan_1_t24D5B379F1F952E5A59D3978DA083ABA4112FC44* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2FF1AFDE73D41E56738BCB3608D874E6DC22AA54 (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_12;
		L_12 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>(L_11);
		int32_t L_13 = ___1_start;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_14;
		L_14 = il2cpp_unsafe_add<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,int32_t>(L_12, L_13, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m48CF90029087210882EBD77966DB550B314185DE (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2;
		L_2 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>((uint8_t*)L_1);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ReadOnlySpan_1_get_Item_m1F37AC9C1CB6CCFD19F8B6D0F2CB3CD362424495 (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_2 = __this->____pointer;
		V_0 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5;
		L_5 = il2cpp_unsafe_add<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,int32_t>(L_3, L_4, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m9C4C02A962CC5D58366A3DDC1CE9D314D063B10D (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_2 = ___0_destination;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_3 = L_2.____pointer;
		V_0 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5 = __this->____pointer;
		V_0 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mA06A7E11E4216AAC75B48D6B2D50A044E574BC87 (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFB84148EFC50BBB0940E474682C1649251F02576_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t391B794BE458E4BEE6117AD64D9AC077EDC512C6 L_2 = ___0_destination;
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_3 = L_2.____pointer;
		V_1 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_1));
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5 = __this->____pointer;
		V_1 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m3337D877A240DA18155D76730FB0F4040B411E66 (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820 ReadOnlySpan_1_Slice_mC4776DBCD1F9CA808DB5205269A607F68695FBB9 (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_2 = __this->____pointer;
		V_0 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5;
		L_5 = il2cpp_unsafe_add<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,int32_t>(L_3, L_4, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA7A30FB7B805A8FB05709CD7C7D8C29E3F3C60CA_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820 ReadOnlySpan_1_Slice_m8BE1891815A2F3EA45CBF2FE22CAED85D635CC8C (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_5 = __this->____pointer;
		V_0 = L_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8;
		L_8 = il2cpp_unsafe_add<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,int32_t>(L_6, L_7, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mA7A30FB7B805A8FB05709CD7C7D8C29E3F3C60CA_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ReadOnlySpan_1_ToArray_m94CDEBC5B30770752C1B3F1BD70AD2E16E319327 (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_1;
		L_1 = Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_3 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6;
		L_6 = il2cpp_unsafe_as_ref<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>(L_5);
		ByReference_1_tE86CE265923F6BE3290C056F8FADF455DF34F6AD L_7 = __this->____pointer;
		V_0 = L_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mA79188FFA08E7DCB624F8CB369851996DA2B140F (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mBA696B45BEEE7D525779541D0F855E02F515978F (ReadOnlySpan_1_tDE8983102D42568E6127FA7BE5CE63380CD7A820* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m433E97BC09B4B490B474D25AC63D2E17E2EDADCC (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_12;
		L_12 = il2cpp_unsafe_as_ref<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268>(L_11);
		int32_t L_13 = ___1_start;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_14;
		L_14 = il2cpp_unsafe_add<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268,int32_t>(L_12, L_13, sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268));
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m34D634C82643C4EF16E0C8B08F6F779EE4111342 (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_2;
		L_2 = il2cpp_unsafe_as_ref<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268>((uint8_t*)L_1);
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ReadOnlySpan_1_get_Item_mBDA9B077ED945F63B585EA9F02236D9D1F6A8BD4 (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_2 = __this->____pointer;
		V_0 = L_2;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_5;
		L_5 = il2cpp_unsafe_add<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268,int32_t>(L_3, L_4, sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m986EC927FEB0F855D36894C9426AEFD7A7F3889C (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, Span_1_t67B354B7480ABD4B9B0CC224963BF3FA97C32364 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m935A58100847BA5DDD175AD48F6BAE58405B6274_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t67B354B7480ABD4B9B0CC224963BF3FA97C32364 L_2 = ___0_destination;
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_3 = L_2.____pointer;
		V_0 = L_3;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268, (Il2CppByReference*)(&V_0));
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_5 = __this->____pointer;
		V_0 = L_5;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mB9D5545DD5F09B740B941EEEC446D6DDDF8761F8(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m09921B570EF3E01B01AF99D5601C048594D13F57 (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, Span_1_t67B354B7480ABD4B9B0CC224963BF3FA97C32364 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m935A58100847BA5DDD175AD48F6BAE58405B6274_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t67B354B7480ABD4B9B0CC224963BF3FA97C32364 L_2 = ___0_destination;
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_3 = L_2.____pointer;
		V_1 = L_3;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268, (Il2CppByReference*)(&V_1));
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_5 = __this->____pointer;
		V_1 = L_5;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mB9D5545DD5F09B740B941EEEC446D6DDDF8761F8(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mCE1155264E4FF25EF3CDA2CE25729F05804F8E7A (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06 ReadOnlySpan_1_Slice_m9E6E6775383A2E1335A65D17AE7680D545B4CC1B (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_2 = __this->____pointer;
		V_0 = L_2;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_5;
		L_5 = il2cpp_unsafe_add<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268,int32_t>(L_3, L_4, sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m8EA8116C2600C1FDF0AD4D2A54C710781A4050BB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06 ReadOnlySpan_1_Slice_m10E15A39DF5A8837E1474B2908E9D405AC6FCD13 (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_5 = __this->____pointer;
		V_0 = L_5;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_8;
		L_8 = il2cpp_unsafe_add<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268,int32_t>(L_6, L_7, sizeof(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m8EA8116C2600C1FDF0AD4D2A54C710781A4050BB_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* ReadOnlySpan_1_ToArray_m356C308C65976BED8704BD480C303A225EBAEBEE (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* L_1;
		L_1 = Array_Empty_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FA6ECB1AF7012B967576165F9CC50F2D282A272_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* L_3 = (RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46*)(RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_6;
		L_6 = il2cpp_unsafe_as_ref<RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268>(L_5);
		ByReference_1_t8F6CF787BD5D87C78F6FC70F368D9FA35DCB8F5A L_7 = __this->____pointer;
		V_0 = L_7;
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_mB9D5545DD5F09B740B941EEEC446D6DDDF8761F8(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m9844E105A96726D31BD5878922F08A70C15964F7 (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m97A700530171458122E53953C5445DA62867C0DA (ReadOnlySpan_1_t6661B8EC8167F5F6DC57AEB0633C8639D20BAB06* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4486DE23EEB8960B61ACF09809A6CA359B76955C (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_12;
		L_12 = il2cpp_unsafe_as_ref<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>(L_11);
		int32_t L_13 = ___1_start;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_14;
		L_14 = il2cpp_unsafe_add<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5,int32_t>(L_12, L_13, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m8602B3388D2DB0AF2B2FD713348F46074035334E (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_2;
		L_2 = il2cpp_unsafe_as_ref<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>((uint8_t*)L_1);
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ReadOnlySpan_1_get_Item_m7DA6D76AF19A396625A48513D2890992585312E1 (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_2 = __this->____pointer;
		V_0 = L_2;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_5;
		L_5 = il2cpp_unsafe_add<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5,int32_t>(L_3, L_4, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m76055FFFBE2E13633500FC2258A09A743B89349C (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA7772A74BF980252F9D805432D912AD281AD2C17_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 L_2 = ___0_destination;
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_3 = L_2.____pointer;
		V_0 = L_3;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_0));
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_5 = __this->____pointer;
		V_0 = L_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mC91A21AF5BF0292587526A9012D6A98F1FFA0016 (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mA7772A74BF980252F9D805432D912AD281AD2C17_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBEC7C4E9169E4140C814175AFCBB22857D8132A3 L_2 = ___0_destination;
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_3 = L_2.____pointer;
		V_1 = L_3;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_1));
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_5 = __this->____pointer;
		V_1 = L_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m8D620FDE5825F447F6721CCAA610984A9900F2E7 (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD ReadOnlySpan_1_Slice_m692EE297511DDCA175AA81D45D219F4DB034047F (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_2 = __this->____pointer;
		V_0 = L_2;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_5;
		L_5 = il2cpp_unsafe_add<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5,int32_t>(L_3, L_4, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m2F1048E4C305F0CF15B3CDBD5E73EAAF024308AA_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD ReadOnlySpan_1_Slice_mA7FBD7D69D26C842DD71D44713F0A7CA9D39D67F (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_5 = __this->____pointer;
		V_0 = L_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_8;
		L_8 = il2cpp_unsafe_add<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5,int32_t>(L_6, L_7, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m2F1048E4C305F0CF15B3CDBD5E73EAAF024308AA_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ReadOnlySpan_1_ToArray_m1C644F4B78C4B6ACD1D7BFEBF6FB67219977856D (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_1;
		L_1 = Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_3 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6;
		L_6 = il2cpp_unsafe_as_ref<RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5>(L_5);
		ByReference_1_t2C9EE6F0EEB9A48B9891A55AB01B889A5F567D60 L_7 = __this->____pointer;
		V_0 = L_7;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0759F2B6F8E40AFE146E9082633904BC26CBCCD7(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m0D3BC5727025A772D6934D63A01901DDBD558FC7 (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m6BE04133D38F1C0832381B501E209EEDB08C6FD1 (ReadOnlySpan_1_t7232E7F75E265E4B3C1307678DB3C0971CB211AD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0434EBFEF8DA0D96A0DBA83EBC8539F62129BC60 (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		int8_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<int8_t>(L_11);
		int32_t L_13 = ___1_start;
		int8_t* L_14;
		L_14 = il2cpp_unsafe_add<int8_t,int32_t>(L_12, L_13, sizeof(int8_t));
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCC16CB206E1C1F9C58108316B888B40873EB7008 (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		int8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<int8_t>((uint8_t*)L_1);
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* ReadOnlySpan_1_get_Item_mB7B7C8F963921B0E94BBCCAA86CD5B7F1EE33DE5 (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_2 = __this->____pointer;
		V_0 = L_2;
		int8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		int8_t* L_5;
		L_5 = il2cpp_unsafe_add<int8_t,int32_t>(L_3, L_4, sizeof(int8_t));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4DDFD33D3BC627EE0AFEE66027890A0FFF76002F (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_2 = ___0_destination;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_3 = L_2.____pointer;
		V_0 = L_3;
		int8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5 = __this->____pointer;
		V_0 = L_5;
		int8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m50A97FE2AC17B70DDD1644A5AEC38D7615E06792 (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF7BD3765E86D3ED55FB40E64A3D0F2D90EC0F908_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t53F7EC6DD1FE372380AC5F8146A9DA9F38A73E03 L_2 = ___0_destination;
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_3 = L_2.____pointer;
		V_1 = L_3;
		int8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5 = __this->____pointer;
		V_1 = L_5;
		int8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mFB1641C3D657F65BACFA951982705BA779DA70A8 (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC ReadOnlySpan_1_Slice_m5E5DE40D2DEE43D1E4EFA060762063C8C78274F1 (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_2 = __this->____pointer;
		V_0 = L_2;
		int8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		int8_t* L_5;
		L_5 = il2cpp_unsafe_add<int8_t,int32_t>(L_3, L_4, sizeof(int8_t));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m783D660E0BF03935E536537C3B32F79A7BD0FB42_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC ReadOnlySpan_1_Slice_m7435F627490A17992089BBD19C2CC070248BD38D (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_5 = __this->____pointer;
		V_0 = L_5;
		int8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		int8_t* L_8;
		L_8 = il2cpp_unsafe_add<int8_t,int32_t>(L_6, L_7, sizeof(int8_t));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m783D660E0BF03935E536537C3B32F79A7BD0FB42_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ReadOnlySpan_1_ToArray_m8BFD41D628CD39A9EE915B8E69C9A1E2B5EFF1E3 (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		int8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<int8_t>(L_5);
		ByReference_1_t2D54E89BEF42DA6397FC70A30249F029F8C7FF62 L_7 = __this->____pointer;
		V_0 = L_7;
		int8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(int8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8921CF9FB1C61F7FA656ADE11B64F27943551250(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m4EE6B9E5884C43755D68C730E2354C7F8D9510CD (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m0F2FD6887AA314167FA31E1BB20D4201839320DE (ReadOnlySpan_1_tB90CE592448A63B07B56F79364563BD361CF8CDC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC2013143DC1227FA2243E83F9C385E5D3F48520D (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		float* L_12;
		L_12 = il2cpp_unsafe_as_ref<float>(L_11);
		int32_t L_13 = ___1_start;
		float* L_14;
		L_14 = il2cpp_unsafe_add<float,int32_t>(L_12, L_13, sizeof(float));
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9DE47E5BAC10328F988C3D9308567922017CA1ED (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		float* L_2;
		L_2 = il2cpp_unsafe_as_ref<float>((uint8_t*)L_1);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* ReadOnlySpan_1_get_Item_m9388C42578C1FCB63DCDAF62A2CACED3FFC3DEC3 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_2 = __this->____pointer;
		V_0 = L_2;
		float* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		float* L_5;
		L_5 = il2cpp_unsafe_add<float,int32_t>(L_3, L_4, sizeof(float));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD62B4F44BCFCCEC14AEE2FE1BE7C441BBD343956 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_2 = ___0_destination;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3 = L_2.____pointer;
		V_0 = L_3;
		float* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_0 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m97087B7E315DCC744D17DDBBFDE2BBEA57AB9A67 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED11128A130F01BC9C5F690BFFAEF38B2283751B_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_2 = ___0_destination;
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_3 = L_2.____pointer;
		V_1 = L_3;
		float* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_1));
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_1 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF37DC9B8B6484FFFEC6E983CFA3E6FA34CBAF490 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D ReadOnlySpan_1_Slice_m2F8D2B0696358F95B49EC8A76EB19C665328088B (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_2 = __this->____pointer;
		V_0 = L_2;
		float* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		float* L_5;
		L_5 = il2cpp_unsafe_add<float,int32_t>(L_3, L_4, sizeof(float));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D ReadOnlySpan_1_Slice_m81A0B75F13ADE2F98DD5D5C95E6928795216D969 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5 = __this->____pointer;
		V_0 = L_5;
		float* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		float* L_8;
		L_8 = il2cpp_unsafe_add<float,int32_t>(L_6, L_7, sizeof(float));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mA93F2958FDB8B48F00F57C878275CF739DE6273B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ReadOnlySpan_1_ToArray_m0BDF9054C4F2F5AA5016A8962271F848E930E715 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		float* L_6;
		L_6 = il2cpp_unsafe_as_ref<float>(L_5);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_7 = __this->____pointer;
		V_0 = L_7;
		float* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(float, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m577C806084793F179F0D10526E8D4CA9A2460E5A (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m8152165A5A09638A978F77B89E4537DCE7CCC5F7 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m8CEB56690FBA7800656B07804FE267C25B4ED300 (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_12;
		L_12 = il2cpp_unsafe_as_ref<UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1>(L_11);
		int32_t L_13 = ___1_start;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_14;
		L_14 = il2cpp_unsafe_add<UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1,int32_t>(L_12, L_13, sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1));
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB006FD84CA147D20DEB703FBAB25D224B1EA81A0 (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_2;
		L_2 = il2cpp_unsafe_as_ref<UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1>((uint8_t*)L_1);
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* ReadOnlySpan_1_get_Item_m08620D1AA4DB4393048A2A9E7FE0C67EDA0D3AAC (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_2 = __this->____pointer;
		V_0 = L_2;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_5;
		L_5 = il2cpp_unsafe_add<UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1,int32_t>(L_3, L_4, sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m99C4899897462A9827FBB85122FBB633DB668BE3 (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, Span_1_t91E859A7F5102FCE48106AF191E764662C352376 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9AFB9D02D8A8AFCD6ED1141987B9D286B67413C8_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t91E859A7F5102FCE48106AF191E764662C352376 L_2 = ___0_destination;
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_3 = L_2.____pointer;
		V_0 = L_3;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (Il2CppByReference*)(&V_0));
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_5 = __this->____pointer;
		V_0 = L_5;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m5B8AD5D85E61891746B21D0E835C7DB36C7CF181(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m9FE502668AFFDE7721BAC27D3B7C338DF28982D2 (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, Span_1_t91E859A7F5102FCE48106AF191E764662C352376 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9AFB9D02D8A8AFCD6ED1141987B9D286B67413C8_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t91E859A7F5102FCE48106AF191E764662C352376 L_2 = ___0_destination;
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_3 = L_2.____pointer;
		V_1 = L_3;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (Il2CppByReference*)(&V_1));
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_5 = __this->____pointer;
		V_1 = L_5;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m5B8AD5D85E61891746B21D0E835C7DB36C7CF181(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mDF7FC9729C96BEB572D323FA9C13A257423A724F (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928 ReadOnlySpan_1_Slice_m0B090AA1F0622902549687ED324732612F8F967D (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_2 = __this->____pointer;
		V_0 = L_2;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_5;
		L_5 = il2cpp_unsafe_add<UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1,int32_t>(L_3, L_4, sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mD1FA2C269E7225534F87982871172E2BF966D6F8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928 ReadOnlySpan_1_Slice_m1AAA323825C48808FB6AE6400117D858035C99C0 (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_5 = __this->____pointer;
		V_0 = L_5;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_8;
		L_8 = il2cpp_unsafe_add<UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1,int32_t>(L_6, L_7, sizeof(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mD1FA2C269E7225534F87982871172E2BF966D6F8_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* ReadOnlySpan_1_ToArray_m4B4E0DE43C427E320DDA4B091396EDC949CA4829 (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* L_1;
		L_1 = Array_Empty_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m1E056A5DCDCD92CBB4C160F7C488F7872C2CD959_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* L_3 = (UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7*)(UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_6;
		L_6 = il2cpp_unsafe_as_ref<UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1>(L_5);
		ByReference_1_t8C2AB16B1D0935DFF7F7F7FA77FCFC76AC5A1099 L_7 = __this->____pointer;
		V_0 = L_7;
		UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m5B8AD5D85E61891746B21D0E835C7DB36C7CF181(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD77D9451794F6A1B735E26C4BDB25B2CED39BFED (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m73940ABD7CCEAA6C692112C4761110C45458CD37 (ReadOnlySpan_1_t7A1F9CB188FA2D93CFB80F4AADFA6D12B04B9928* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA0FEA13918477202765ABFBE3C7306A3F27D691D (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_12;
		L_12 = il2cpp_unsafe_as_ref<UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC>(L_11);
		int32_t L_13 = ___1_start;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_14;
		L_14 = il2cpp_unsafe_add<UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC,int32_t>(L_12, L_13, sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC));
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1C339D66C1E39FEF91D6699CD3B6BBE49855A27C (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_2;
		L_2 = il2cpp_unsafe_as_ref<UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC>((uint8_t*)L_1);
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* ReadOnlySpan_1_get_Item_m33D1E80A1854EE458C94DAB7E1EF890A898B1889 (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_2 = __this->____pointer;
		V_0 = L_2;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_5;
		L_5 = il2cpp_unsafe_add<UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC,int32_t>(L_3, L_4, sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mBB538A44E66D92B1DB8CB3DE8754386A9E5F76A0 (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, Span_1_t1DE1A06AB5905D00E19175BF04280D391B66AE9B ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m6C5E2C0CA543EB88576173104FF16834FBDC9D69_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t1DE1A06AB5905D00E19175BF04280D391B66AE9B L_2 = ___0_destination;
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_3 = L_2.____pointer;
		V_0 = L_3;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC, (Il2CppByReference*)(&V_0));
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_5 = __this->____pointer;
		V_0 = L_5;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2C6A7396A90038CFB2693ACCB2C25F8E1DC07FAC(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m13D3220BC552003D43A2AFAAFE4A31FA97ED7BE9 (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, Span_1_t1DE1A06AB5905D00E19175BF04280D391B66AE9B ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m6C5E2C0CA543EB88576173104FF16834FBDC9D69_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t1DE1A06AB5905D00E19175BF04280D391B66AE9B L_2 = ___0_destination;
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_3 = L_2.____pointer;
		V_1 = L_3;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC, (Il2CppByReference*)(&V_1));
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_5 = __this->____pointer;
		V_1 = L_5;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2C6A7396A90038CFB2693ACCB2C25F8E1DC07FAC(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m987F08FD6FCF8B347C5BFD002972B81E18454AF5 (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB ReadOnlySpan_1_Slice_mD26E185F3640B0AB82994A5BC468C2A02FE9A18F (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_2 = __this->____pointer;
		V_0 = L_2;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_5;
		L_5 = il2cpp_unsafe_add<UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC,int32_t>(L_3, L_4, sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m5F08B31B7913DF85EC0AF356647321BCDA8DD0C6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB ReadOnlySpan_1_Slice_m9AB2AD18B0E4D484B6BBBBBC325FDA29AED7DB40 (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_5 = __this->____pointer;
		V_0 = L_5;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_8;
		L_8 = il2cpp_unsafe_add<UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC,int32_t>(L_6, L_7, sizeof(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m5F08B31B7913DF85EC0AF356647321BCDA8DD0C6_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* ReadOnlySpan_1_ToArray_mF1B86331E54E435D3EAE0A0058AE7AE100CDB648 (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* L_1;
		L_1 = Array_Empty_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m632FF706BFE05FABBB1E9E5507F6A789F8EDDEC4_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* L_3 = (UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84*)(UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (uint32_t)L_2);
		UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_6;
		L_6 = il2cpp_unsafe_as_ref<UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC>(L_5);
		ByReference_1_t60EC7F98B3BA410457264CB0A2D79CD45F978855 L_7 = __this->____pointer;
		V_0 = L_7;
		UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m2C6A7396A90038CFB2693ACCB2C25F8E1DC07FAC(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mB26B05217688211EAF8AA83E7B606CB71480B068 (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mC96D9D25D57AF97054D80FCB207EE29459A2873D (ReadOnlySpan_1_tB7741C82AF09D89D2170136E8BA1B3447DF4B6EB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m5E422A0C147B8372423DA2FBD542E9B56475E155_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m78272C2BF84C058D8EE1DC1B527061D994DE5A8D_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyNativeArray_1_get_Length_m60D93631DA1DAB84C25E5608C8F6C0F35F746D9B_fshared_inline (ReadOnlyNativeArray_1_t871FF47D27182B2AFCB8B9AF1985CA0F14E3DD2D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtility_ReadArrayElement_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m905C72220D8382A63DE15F641FB79D977F0832D1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_mD2F873DB0980857C41237FCC123CD3BC1B6B57E6_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mF9C0FE0D71B20D2C36D4A2BB90F796CA9BBF4BCE_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m0F16771B993937271160B6B8203D4AF6E89B3E20_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtility_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mD87C3A7372D142B0EA88A8FF8AD08122940B359B_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1DB9C74A2931EC40BC55F536EAF48A42F71DF8B7_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mAE79C39684046A5F096FE1B47509DC33A6244D17_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mC0D8F1150C7D0AB1BF48EAE3FF8A9E7EADCFC89E_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 UnsafeUtility_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m5F208C837C6C181F7E81B6B6A36ECB74684DBA9F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m4345334F80FD4FB761347999B8A9004C958D64DA_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m6F3370794D529FBD1C207B37CE90EED3727D1402_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mFBBF9A2E9BB0CAB3C6D88F9704CB94801B5AD2AD_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA UnsafeUtility_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mD8EE7D8C864807FBCEC4DDC8FA4F49020E69CDAD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m2E0FD6D2498C503F769CEFE47DF79E726B9C7FDD_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m39B188D0E7EFBF8BB50DAC2D8AB0D4B416C0913F_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mACC62B7BAF4F96671BDF67DAF8426803DA34BD5A_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 UnsafeUtility_ReadArrayElement_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_m69E498529672D8705FB236D730C08065B89F0EFB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mE687C1AD6376CCC54F5866BFFE1F255B9DA6C077_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mDA2CC4CFDF13432CD0F6B08B78AFCADE31C16E5A_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mEF2765F622ED105A14F0656807BBB2425A0121C3_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 UnsafeUtility_ReadArrayElement_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mD09D9FB229BE47475FA11D0BC51E0462309DADB6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mC30EE097D8547D03C2210B9BFF9FADB621597409_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m277D2B82543894400F2730BCB1472C5B724A80C7_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m23BA149EBF76E163C89964705E74FA4224977ACE_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 UnsafeUtility_ReadArrayElement_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_mCB0A9294C8CC48F89EA3A395A60C27A0B9C88E43_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m92C80DB24D1D32A50FADE2ADA13211A588275A7C_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_m3FEDECD4C69FC51951E58D1CE5504808FBEB8525_inline (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mB83ABF072941823A1F4667BF1B89999548C0C8C6_inline(NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtility_ReadArrayElement_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mCFE0F00C39EA5D2BE10413FCE7D400BF7A67134F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mFD2AC276019C55228F1B14548F4BE7E84A490C65_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtility_ReadArrayElementWithStride_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m6625B716B5D5B46E0E1B468DDF49D803AC5BC79D_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 L_3;
		L_3 = UnsafeUtilityInternal_ReadArrayElementWithStride_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m932FACC6D67C0E64F840E47EE9566B3CF528CACC_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtility_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_mFE1F5718E0BB21814F12FFABF6F1225692861091_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_3;
		L_3 = UnsafeUtilityInternal_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1026DB327315683A43C770F7042A812828864AB5_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 UnsafeUtility_ReadArrayElementWithStride_Tissbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39_mA975F11026D3468099BE55A3AB702AFFBC22DEDD_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 L_3;
		L_3 = UnsafeUtilityInternal_ReadArrayElementWithStride_Tissbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39_m062B9F3D9CACE856BC27C2414CEB7DEE37B585FE_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E UnsafeUtility_ReadArrayElementWithStride_Tisshort3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E_m20C832EE0B72BE24BCDD299D95B0BCE05AC6B978_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E L_3;
		L_3 = UnsafeUtilityInternal_ReadArrayElementWithStride_Tisshort3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E_m8AF3F30BF819A18FA5A928CD3EACC230316694F7_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtility_ReadArrayElementWithStride_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mECC3D9E093A7EB2077FDC90597116406231342CC_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 L_3;
		L_3 = UnsafeUtilityInternal_ReadArrayElementWithStride_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mF963CE2AADAF08A579C1BBECD9EF22F15F5173DD_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ((EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ((EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ((EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ((EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* Array_Empty_TisEmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B_m87CA399E64D82A02BCE81DF2F8F52AD65AC9BC25_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EmbeddedLODBufferU5BU5D_tE9306A2B9F9117018BC148A2D7AC217806AAF0F1* L_0 = ((EmptyArray_1_t662659478531CA2736931D12958F36C14566158B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ((EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* Array_Empty_TisGPUDrivenMeshData_t0D53E18AECCB1ED48149AFD77C12CF1624340C32_m0C324743704C230D82B1D3F4A8A72DAECCD01F62_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GPUDrivenMeshDataU5BU5D_tADCD87573A22AEB8F7978D2BC358C75F8B976BCE* L_0 = ((EmptyArray_1_t3264D01575877F752602C31CBF848A455D557C15_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* Array_Empty_TisGPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B_mE8D045B3FF593AAD4C1EC5FD9B669AAC4C2A5BDE_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GPUDrivenSubMeshU5BU5D_tBD994B85B11FA06D517EB3B3F6ADF24F75C0093C* L_0 = ((EmptyArray_1_tED25994B188B6892932012A3712E4921DCF8DC7F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* Array_Empty_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m761A383758DAB252A3DBE0ACBA4259EBDF64D107_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ((EmptyArray_1_t4EE5BABC44C01484425092F57C431BC60B239E5F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* Array_Empty_TisIntPtr_t_m1686875222864A49C32BCAEBB2953B28D153D6F0_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_0 = ((EmptyArray_1_t2830E284F9E70287360502CE6203C9A09CFC27A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* Array_Empty_TisInternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D_mB158970D4273B39753506A6ECB7585D0421BDA9B_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		InternalLODGroupSettingsU5BU5D_t9D738562E64FDD6B362BD45E13CAF8C0053C546D* L_0 = ((EmptyArray_1_t3ED800CA396DD5FE577C3573C21F0BC23A7BDF16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* Array_Empty_TisInternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73_m84564B99B54C40C147D3A88036CC3D9735B5BCB2_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		InternalMeshLodRendererSettingsU5BU5D_t7EC390B8229C6E1F4419B2EF9FBB41661C4F977B* L_0 = ((EmptyArray_1_tE1BA498278C22B67C666BD7058E54BC81EA1D825_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* Array_Empty_TisInternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF_m3CC4AD8964A97157D964C70F4FAD0DEB0DFB6F31_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		InternalMeshRendererSettingsU5BU5D_tCE9E78C5B284D7EF791CA7320C5BE267D9D88B87* L_0 = ((EmptyArray_1_tC518321371D83293EEE3E6186DEABEDB5EBE2F5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = ((EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* Array_Empty_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_m315C8467E4A16A94FA9D2BECB810CCD904C21E62_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = ((EmptyArray_1_t1CCCAC7E81869FF4087208AB51DFD23C32EC5344_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* Array_Empty_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mD7C4C67D28BC2015E6AEAC2EB631C28550B6F876_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		LightDataGIU5BU5D_t601249761317191DDFD88CC86C182176C9EFD713* L_0 = ((EmptyArray_1_t7113B8DA030AFF38A7200E4BE63923D9F5C065AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Array_Empty_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m36408D2B54D6A6519FAF5E5AD03F49ECECA09F2E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ((EmptyArray_1_t685951D47CCFA8F90AC66EE22811A68A045FB065_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* Array_Empty_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m171C76990EAD2F2943A87BABB79B20678A3EB156_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ModifiableContactPairU5BU5D_t49FEE281D78348FA04D235768FBD95339F730D5B* L_0 = ((EmptyArray_1_tD2F566BAB12FA76DB039E69BAD54167F71288B77_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* Array_Empty_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC19BD76A3AC2E1A6E7A7F12640FCDF2F4209EFF7_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_0 = ((EmptyArray_1_t6F7601522B7C3D965C794144D6AB06B5E56C389F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Array_Empty_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mCE17AEB484914CF98BCAA9B85E19A2A027EE46C6_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ((EmptyArray_1_t6D66030EDC48119B7B485C10DBB9F8FB67366E47_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* Array_Empty_TisRangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_m8FA6ECB1AF7012B967576165F9CC50F2D282A272_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		RangeIntU5BU5D_tDA19CDA125B717AE0DA671E191F3E59CD9132A46* L_0 = ((EmptyArray_1_tBB3F2EBEEAFDFCA8B95C3844F3C87977017C8FB9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Array_Empty_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m149247A6A82D3F19AE3B6E01B4ACCBF7D7D9E42B_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_0 = ((EmptyArray_1_tA3FD4DA73690B22AF51247DE4AB33A52280CF1DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Array_Empty_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mE1E6DB6377A6DCA206C1AB31B3964386D486F94F_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ((EmptyArray_1_tB3950DD0CFA703643EB93EDD4FF714B5A085FF8F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Array_Empty_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m44F781E90531F7FCDB12BC4290CD4394A887FC06_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ((EmptyArray_1_t2984B8F74E4B1E6C047125D296C6C06779CA328D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* Array_Empty_TisUEncroachingSegment_t3AE1B0B8E50020697D3FA3FFF0C86E406ABFA3C1_m1E056A5DCDCD92CBB4C160F7C488F7872C2CD959_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UEncroachingSegmentU5BU5D_t7075F9373343392D95EC7919F8D59B65AA2336B7* L_0 = ((EmptyArray_1_tAF2C88ED16F6EE561E378C2CA47889D8AB47A972_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* Array_Empty_TisUEvent_t81CE84F34955D2A2DE962ADE28CDE659605FB2AC_m632FF706BFE05FABBB1E9E5507F6A789F8EDDEC4_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UEventU5BU5D_tCE23E8FC2C44546A5B276F48FA6FC2DAA9A47B84* L_0 = ((EmptyArray_1_t5C8D81E1D1E6C2E3B929149FA294E593E862EE82_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m78272C2BF84C058D8EE1DC1B527061D994DE5A8D_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtilityInternal_ReadArrayElement_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_mD2F873DB0980857C41237FCC123CD3BC1B6B57E6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 L_6 = (*(byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m0F16771B993937271160B6B8203D4AF6E89B3E20_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float3_t7600B73F092B37F484B12910A5269F30C778D31E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtilityInternal_ReadArrayElement_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1DB9C74A2931EC40BC55F536EAF48A42F71DF8B7_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float3_t7600B73F092B37F484B12910A5269F30C778D31E);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_6 = (*(float3_t7600B73F092B37F484B12910A5269F30C778D31E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_mC0D8F1150C7D0AB1BF48EAE3FF8A9E7EADCFC89E_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4_t545A994996126766890C1F28B43EA823F2410190);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 UnsafeUtilityInternal_ReadArrayElement_Tisfloat4_t545A994996126766890C1F28B43EA823F2410190_m4345334F80FD4FB761347999B8A9004C958D64DA_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float4_t545A994996126766890C1F28B43EA823F2410190);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4_t545A994996126766890C1F28B43EA823F2410190 L_6 = (*(float4_t545A994996126766890C1F28B43EA823F2410190*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_mFBBF9A2E9BB0CAB3C6D88F9704CB94801B5AD2AD_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA UnsafeUtilityInternal_ReadArrayElement_Tisfloat4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA_m2E0FD6D2498C503F769CEFE47DF79E726B9C7FDD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA L_6 = (*(float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mACC62B7BAF4F96671BDF67DAF8426803DA34BD5A_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 UnsafeUtilityInternal_ReadArrayElement_Tissbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3_mE687C1AD6376CCC54F5866BFFE1F255B9DA6C077_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3 L_6 = (*(sbyte4_t060B3B3BCCE50375E18A91753E76E5CA8EA37DF3*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mEF2765F622ED105A14F0656807BBB2425A0121C3_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(short4_t38448E883580290AAC4DD05BC8FDED5F200EE252);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 UnsafeUtilityInternal_ReadArrayElement_Tisshort4_t38448E883580290AAC4DD05BC8FDED5F200EE252_mC30EE097D8547D03C2210B9BFF9FADB621597409_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(short4_t38448E883580290AAC4DD05BC8FDED5F200EE252);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		short4_t38448E883580290AAC4DD05BC8FDED5F200EE252 L_6 = (*(short4_t38448E883580290AAC4DD05BC8FDED5F200EE252*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m23BA149EBF76E163C89964705E74FA4224977ACE_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 UnsafeUtilityInternal_ReadArrayElement_Tisuint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6_m92C80DB24D1D32A50FADE2ADA13211A588275A7C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6 L_6 = (*(uint3_t45FFBC5BF37BC29A11A742B3E7650F7CA89B03B6*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mB83ABF072941823A1F4667BF1B89999548C0C8C6_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtilityInternal_ReadArrayElement_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mFD2AC276019C55228F1B14548F4BE7E84A490C65_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 L_6 = (*(ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 UnsafeUtilityInternal_ReadArrayElementWithStride_Tisbyte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96_m932FACC6D67C0E64F840E47EE9566B3CF528CACC_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96 L_6 = (*(byte3_tC21B8BF98C4F285F72D689BFA5B87A9D65A04E96*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E UnsafeUtilityInternal_ReadArrayElementWithStride_Tisfloat3_t7600B73F092B37F484B12910A5269F30C778D31E_m1026DB327315683A43C770F7042A812828864AB5_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_6 = (*(float3_t7600B73F092B37F484B12910A5269F30C778D31E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 UnsafeUtilityInternal_ReadArrayElementWithStride_Tissbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39_m062B9F3D9CACE856BC27C2414CEB7DEE37B585FE_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39 L_6 = (*(sbyte3_t330AC03E8BBF25451822596036D631B3D4BC9A39*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E UnsafeUtilityInternal_ReadArrayElementWithStride_Tisshort3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E_m8AF3F30BF819A18FA5A928CD3EACC230316694F7_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E L_6 = (*(short3_t2226F3D0A41DBE3707B9816EF88741C63D51FF3E*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 UnsafeUtilityInternal_ReadArrayElementWithStride_Tisushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424_mF963CE2AADAF08A579C1BBECD9EF22F15F5173DD_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424 L_6 = (*(ushort3_t7EF8C8DE3C4496049AE361C0BA8CC7FF0C45A424*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
