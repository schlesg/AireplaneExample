

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Example.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Example_276139089_hpp
#define Example_276139089_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport aireplane {

  public:
    aireplane();

    aireplane(
        int32_t aireplaneID,
        int32_t x,
        int32_t y,
        int32_t z);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    aireplane (aireplane&&) = default;
    aireplane& operator=(aireplane&&) = default;
    aireplane& operator=(const aireplane&) = default;
    aireplane(const aireplane&) = default;
    #else
    aireplane(aireplane&& other_) OMG_NOEXCEPT;  
    aireplane& operator=(aireplane&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& aireplaneID() OMG_NOEXCEPT; 
    const int32_t& aireplaneID() const OMG_NOEXCEPT;
    void aireplaneID(int32_t value);

    int32_t& x() OMG_NOEXCEPT; 
    const int32_t& x() const OMG_NOEXCEPT;
    void x(int32_t value);

    int32_t& y() OMG_NOEXCEPT; 
    const int32_t& y() const OMG_NOEXCEPT;
    void y(int32_t value);

    int32_t& z() OMG_NOEXCEPT; 
    const int32_t& z() const OMG_NOEXCEPT;
    void z(int32_t value);

    bool operator == (const aireplane& other_) const;
    bool operator != (const aireplane& other_) const;

    void swap(aireplane& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_aireplaneID_;
    int32_t m_x_;
    int32_t m_y_;
    int32_t m_z_;

};

inline void swap(aireplane& a, aireplane& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const aireplane& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<aireplane> {
            NDDSUSERDllExport static std::string value() {
                return "aireplane";
            }
        };

        template<>
        struct is_topic_type<aireplane> : public dds::core::true_type {};

        template<>
        struct topic_type_support<aireplane> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const aireplane& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(aireplane& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(aireplane& sample);

            NDDSUSERDllExport 
            static void allocate_sample(aireplane& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<aireplane> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<aireplane> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // Example_276139089_hpp

