/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p> A list of all available options </p>
   */
  class AWS_RDS_API OptionConfiguration
  {
  public:
    OptionConfiguration();
    OptionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    OptionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p> The configuration of options to include in a group. </p>
     */
    inline const Aws::String& GetOptionName() const{ return m_optionName; }

    /**
     * <p> The configuration of options to include in a group. </p>
     */
    inline void SetOptionName(const Aws::String& value) { m_optionNameHasBeenSet = true; m_optionName = value; }

    /**
     * <p> The configuration of options to include in a group. </p>
     */
    inline void SetOptionName(Aws::String&& value) { m_optionNameHasBeenSet = true; m_optionName = value; }

    /**
     * <p> The configuration of options to include in a group. </p>
     */
    inline void SetOptionName(const char* value) { m_optionNameHasBeenSet = true; m_optionName.assign(value); }

    /**
     * <p> The configuration of options to include in a group. </p>
     */
    inline OptionConfiguration& WithOptionName(const Aws::String& value) { SetOptionName(value); return *this;}

    /**
     * <p> The configuration of options to include in a group. </p>
     */
    inline OptionConfiguration& WithOptionName(Aws::String&& value) { SetOptionName(value); return *this;}

    /**
     * <p> The configuration of options to include in a group. </p>
     */
    inline OptionConfiguration& WithOptionName(const char* value) { SetOptionName(value); return *this;}

    /**
     * <p> The optional port for the option. </p>
     */
    inline long GetPort() const{ return m_port; }

    /**
     * <p> The optional port for the option. </p>
     */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p> The optional port for the option. </p>
     */
    inline OptionConfiguration& WithPort(long value) { SetPort(value); return *this;}

    /**
     * <p> A list of DBSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroupMemberships() const{ return m_dBSecurityGroupMemberships; }

    /**
     * <p> A list of DBSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline void SetDBSecurityGroupMemberships(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = value; }

    /**
     * <p> A list of DBSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline void SetDBSecurityGroupMemberships(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = value; }

    /**
     * <p> A list of DBSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& WithDBSecurityGroupMemberships(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroupMemberships(value); return *this;}

    /**
     * <p> A list of DBSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& WithDBSecurityGroupMemberships(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroupMemberships(value); return *this;}

    /**
     * <p> A list of DBSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& AddDBSecurityGroupMemberships(const Aws::String& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(value); return *this; }

    /**
     * <p> A list of DBSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& AddDBSecurityGroupMemberships(Aws::String&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(value); return *this; }

    /**
     * <p> A list of DBSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& AddDBSecurityGroupMemberships(const char* value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(value); return *this; }

    /**
     * <p> A list of VpcSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupMemberships() const{ return m_vpcSecurityGroupMemberships; }

    /**
     * <p> A list of VpcSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline void SetVpcSecurityGroupMemberships(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = value; }

    /**
     * <p> A list of VpcSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline void SetVpcSecurityGroupMemberships(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = value; }

    /**
     * <p> A list of VpcSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& WithVpcSecurityGroupMemberships(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupMemberships(value); return *this;}

    /**
     * <p> A list of VpcSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& WithVpcSecurityGroupMemberships(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupMemberships(value); return *this;}

    /**
     * <p> A list of VpcSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& AddVpcSecurityGroupMemberships(const Aws::String& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(value); return *this; }

    /**
     * <p> A list of VpcSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& AddVpcSecurityGroupMemberships(Aws::String&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(value); return *this; }

    /**
     * <p> A list of VpcSecurityGroupMemebrship name strings used for this option. </p>
     */
    inline OptionConfiguration& AddVpcSecurityGroupMemberships(const char* value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(value); return *this; }

  private:
    Aws::String m_optionName;
    bool m_optionNameHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    Aws::Vector<Aws::String> m_dBSecurityGroupMemberships;
    bool m_dBSecurityGroupMembershipsHasBeenSet;
    Aws::Vector<Aws::String> m_vpcSecurityGroupMemberships;
    bool m_vpcSecurityGroupMembershipsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
