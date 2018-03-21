/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describesecurityconfigurationrequest.h"
#include "describesecurityconfigurationrequest_p.h"
#include "describesecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  DescribeSecurityConfigurationRequest
 *
 * @brief  Implements EMR DescribeSecurityConfiguration requests.
 *
 * @see    EMRClient::describeSecurityConfiguration
 */

/**
 * @brief  Constructs a new DescribeSecurityConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSecurityConfigurationResponse::DescribeSecurityConfigurationResponse(

/**
 * @brief  Constructs a new DescribeSecurityConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSecurityConfigurationRequest::DescribeSecurityConfigurationRequest(const DescribeSecurityConfigurationRequest &other)
    : EMRRequest(new DescribeSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSecurityConfigurationRequest object.
 */
DescribeSecurityConfigurationRequest::DescribeSecurityConfigurationRequest()
    : EMRRequest(new DescribeSecurityConfigurationRequestPrivate(EMRRequest::DescribeSecurityConfigurationAction, this))
{

}

bool DescribeSecurityConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSecurityConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSecurityConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * DescribeSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSecurityConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSecurityConfigurationRequestPrivate
 *
 * @brief  Private implementation for DescribeSecurityConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecurityConfigurationRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public DescribeSecurityConfigurationRequest instance.
 */
DescribeSecurityConfigurationRequestPrivate::DescribeSecurityConfigurationRequestPrivate(
    const EMRRequest::Action action, DescribeSecurityConfigurationRequest * const q)
    : DescribeSecurityConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecurityConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSecurityConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSecurityConfigurationRequest instance.
 */
DescribeSecurityConfigurationRequestPrivate::DescribeSecurityConfigurationRequestPrivate(
    const DescribeSecurityConfigurationRequestPrivate &other, DescribeSecurityConfigurationRequest * const q)
    : DescribeSecurityConfigurationPrivate(other, q)
{

}

} // namespace EMR
} // namespace AWS
