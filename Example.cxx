

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Example.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "Example.hpp"
#include "ExamplePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- aireplane: 

aireplane::aireplane() :
    m_aireplaneID_ (0) ,
    m_x_ (0) ,
    m_y_ (0) ,
    m_z_ (0)  {
}   

aireplane::aireplane (
    int32_t aireplaneID,
    int32_t x,
    int32_t y,
    int32_t z)
    :
        m_aireplaneID_( aireplaneID ),
        m_x_( x ),
        m_y_( y ),
        m_z_( z ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
aireplane::aireplane(aireplane&& other_) OMG_NOEXCEPT  :m_aireplaneID_ (std::move(other_.m_aireplaneID_))
,
m_x_ (std::move(other_.m_x_))
,
m_y_ (std::move(other_.m_y_))
,
m_z_ (std::move(other_.m_z_))
{
} 

aireplane& aireplane::operator=(aireplane&&  other_) OMG_NOEXCEPT {
    aireplane tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void aireplane::swap(aireplane& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_aireplaneID_, other_.m_aireplaneID_);
    swap(m_x_, other_.m_x_);
    swap(m_y_, other_.m_y_);
    swap(m_z_, other_.m_z_);
}  

bool aireplane::operator == (const aireplane& other_) const {
    if (m_aireplaneID_ != other_.m_aireplaneID_) {
        return false;
    }
    if (m_x_ != other_.m_x_) {
        return false;
    }
    if (m_y_ != other_.m_y_) {
        return false;
    }
    if (m_z_ != other_.m_z_) {
        return false;
    }
    return true;
}
bool aireplane::operator != (const aireplane& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t& aireplane::aireplaneID() OMG_NOEXCEPT {
    return m_aireplaneID_;
}

const int32_t& aireplane::aireplaneID() const OMG_NOEXCEPT {
    return m_aireplaneID_;
}

void aireplane::aireplaneID(int32_t value) {
    m_aireplaneID_ = value;
}

int32_t& aireplane::x() OMG_NOEXCEPT {
    return m_x_;
}

const int32_t& aireplane::x() const OMG_NOEXCEPT {
    return m_x_;
}

void aireplane::x(int32_t value) {
    m_x_ = value;
}

int32_t& aireplane::y() OMG_NOEXCEPT {
    return m_y_;
}

const int32_t& aireplane::y() const OMG_NOEXCEPT {
    return m_y_;
}

void aireplane::y(int32_t value) {
    m_y_ = value;
}

int32_t& aireplane::z() OMG_NOEXCEPT {
    return m_z_;
}

const int32_t& aireplane::z() const OMG_NOEXCEPT {
    return m_z_;
}

void aireplane::z(int32_t value) {
    m_z_ = value;
}

std::ostream& operator << (std::ostream& o,const aireplane& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "aireplaneID: " << sample.aireplaneID()<<", ";
    o << "x: " << sample.x()<<", ";
    o << "y: " << sample.y()<<", ";
    o << "z: " << sample.z() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<aireplane> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member aireplane_g_tc_members[4]=
                {

                    {
                        (char *)"aireplaneID",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"x",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"y",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"z",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode aireplane_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"aireplane", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        aireplane_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for aireplane*/

                if (is_initialized) {
                    return &aireplane_g_tc;
                }

                aireplane_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                aireplane_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                aireplane_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                aireplane_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &aireplane_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<aireplane>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<aireplane>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<aireplane>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                aireplanePlugin_new,
                aireplanePlugin_delete);
        }

        std::vector<char>& topic_type_support<aireplane>::to_cdr_buffer(
            std::vector<char>& buffer, const aireplane& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = aireplanePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = aireplanePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<aireplane>::from_cdr_buffer(aireplane& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = aireplanePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create aireplane from cdr buffer");
        }

        void topic_type_support<aireplane>::reset_sample(aireplane& sample) 
        {
            rti::topic::reset_sample(sample.aireplaneID());
            rti::topic::reset_sample(sample.x());
            rti::topic::reset_sample(sample.y());
            rti::topic::reset_sample(sample.z());
        }

        void topic_type_support<aireplane>::allocate_sample(aireplane& sample, int, int) 
        {
        }

    }
}  

