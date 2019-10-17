

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Example.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ExamplePlugin_276139089_h
#define ExamplePlugin_276139089_h

#include "Example.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct aireplane
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct aireplane)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* aireplane must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct aireplane.
*/
typedef  class aireplane aireplaneKeyHolder;

#define aireplanePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define aireplanePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define aireplanePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define aireplanePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define aireplanePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define aireplanePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define aireplanePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern aireplane*
aireplanePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern aireplane*
aireplanePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern aireplane*
aireplanePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
aireplanePluginSupport_copy_data(
    aireplane *out,
    const aireplane *in);

NDDSUSERDllExport extern void 
aireplanePluginSupport_destroy_data_w_params(
    aireplane *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
aireplanePluginSupport_destroy_data_ex(
    aireplane *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
aireplanePluginSupport_destroy_data(
    aireplane *sample);

NDDSUSERDllExport extern void 
aireplanePluginSupport_print_data(
    const aireplane *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern aireplane*
aireplanePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern aireplane*
aireplanePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
aireplanePluginSupport_destroy_key_ex(
    aireplaneKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
aireplanePluginSupport_destroy_key(
    aireplaneKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
aireplanePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
aireplanePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
aireplanePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
aireplanePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
aireplanePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    aireplane *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    aireplane *out,
    const aireplane *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const aireplane *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    aireplane *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
aireplanePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const aireplane *sample); 

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    aireplane **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
aireplanePlugin_deserialize_from_cdr_buffer(
    aireplane *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
aireplanePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
aireplanePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
aireplanePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
aireplanePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
aireplanePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const aireplane * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
aireplanePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
aireplanePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
aireplanePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const aireplane *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    aireplane * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    aireplane ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
aireplanePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    aireplane *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    aireplaneKeyHolder *key, 
    const aireplane *instance);

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    aireplane *instance, 
    const aireplaneKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const aireplane *instance);

NDDSUSERDllExport extern RTIBool 
aireplanePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
aireplanePlugin_new(void);

NDDSUSERDllExport extern void
aireplanePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* ExamplePlugin_276139089_h */

