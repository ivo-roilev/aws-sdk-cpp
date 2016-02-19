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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API AssociateDhcpOptionsRequest : public EC2Request
  {
  public:
    AssociateDhcpOptionsRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline AssociateDhcpOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const{ return m_dhcpOptionsId; }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline void SetDhcpOptionsId(const Aws::String& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = value; }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline void SetDhcpOptionsId(Aws::String&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = value; }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline void SetDhcpOptionsId(const char* value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId.assign(value); }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithDhcpOptionsId(const Aws::String& value) { SetDhcpOptionsId(value); return *this;}

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithDhcpOptionsId(Aws::String&& value) { SetDhcpOptionsId(value); return *this;}

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithDhcpOptionsId(const char* value) { SetDhcpOptionsId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
