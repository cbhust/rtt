/**
 * @file Types.hpp
 * This file contains a series of 'extern template' definitions of the
 * Orocos RTT pre-defined types. You should include this header (or RTT.hpp
 * which includes this header as well) in your components in case you use
 * any of these types.
 */

#ifndef RTT_TYPEKIT_TYPES
//#define RTT_TYPEKIT_TYPES

#include "rtt-typekit-config.h"
#include "RTTTypes.hpp"
#include <string>
#include <vector>

// Disable extern template warning on MSVC
#if !defined( __MINGW__ ) && defined( WIN32 )
# pragma warning( disable : 4231 )
#endif

#ifdef CORELIB_DATASOURCE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::DataSource< int >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::AssignableDataSource< int >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ValueDataSource< int >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ConstantDataSource< int >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ReferenceDataSource< int >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::OutputPort< int >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::InputPort< int >;
#endif
#ifdef ORO_PROPERTY_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Property< int >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Attribute< int >;
#endif

#ifdef ORO_CORELIB_DATASOURCES_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ValueDataSource< bool >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ConstantDataSource< bool >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ReferenceDataSource< bool >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::OutputPort< bool >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::InputPort< bool >;
#endif
#ifdef ORO_PROPERTY_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Property< bool >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Attribute< bool >;
#endif

#ifdef CORELIB_DATASOURCE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::DataSource< unsigned int >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::AssignableDataSource< unsigned int >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ValueDataSource< unsigned int >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ConstantDataSource< unsigned int >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ReferenceDataSource< unsigned int >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::OutputPort< unsigned int >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::InputPort< unsigned int >;
#endif
#ifdef ORO_PROPERTY_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Property< unsigned int >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Attribute< unsigned int >;
#endif

#ifdef CORELIB_DATASOURCE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::DataSource< double >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::AssignableDataSource< double >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ValueDataSource< double >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ConstantDataSource< double >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ReferenceDataSource< double >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::OutputPort< double >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::InputPort< double >;
#endif
#ifdef ORO_PROPERTY_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Property< double >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Attribute< double >;
#endif

#ifdef CORELIB_DATASOURCE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::DataSource< float >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::AssignableDataSource< float >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ValueDataSource< float >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ConstantDataSource< float >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ReferenceDataSource< float >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::OutputPort< float >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::InputPort< float >;
#endif
#ifdef ORO_PROPERTY_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Property< float >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Attribute< float >;
#endif

#ifdef CORELIB_DATASOURCE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::DataSource< char >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::AssignableDataSource< char >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ValueDataSource< char >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ConstantDataSource< char >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ReferenceDataSource< char >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::OutputPort< char >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::InputPort< char >;
#endif
#ifdef ORO_PROPERTY_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Property< char >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Attribute< char >;
#endif


// Disable string for now, we have specilisations in DataSources.hpp which 
// confuse our logic or our compiler:
#if 0
#ifdef CORELIB_DATASOURCE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::DataSource< std::string >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::AssignableDataSource< std::string >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ValueDataSource< std::string >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ConstantDataSource< std::string >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ReferenceDataSource< std::string >;
#endif
#endif
#ifdef ORO_INPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::OutputPort< std::string >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::InputPort< std::string >;
#endif
#ifdef ORO_PROPERTY_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Property< std::string >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Attribute< std::string >;
#endif


#ifdef CORELIB_DATASOURCE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::DataSource< std::vector<double> >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::AssignableDataSource< std::vector<double> >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ValueDataSource< std::vector<double> >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ConstantDataSource< std::vector<double> >;
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::internal::ReferenceDataSource< std::vector<double> >;
#endif
#ifdef ORO_INPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::OutputPort< std::vector<double> >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::InputPort< std::vector<double> >;
#endif
#ifdef ORO_PROPERTY_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Property< std::vector<double> >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
    RTT_TYPEKIT_EXT_TMPL template class RTT_TYPEKIT_API RTT::Attribute< std::vector<double> >;
#endif

#endif
