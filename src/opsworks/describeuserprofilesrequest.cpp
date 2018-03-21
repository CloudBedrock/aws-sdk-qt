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

#include "describeuserprofilesrequest.h"
#include "describeuserprofilesrequest_p.h"
#include "describeuserprofilesresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeUserProfilesRequest
 *
 * @brief  Implements OpsWorks DescribeUserProfiles requests.
 *
 * @see    OpsWorksClient::describeUserProfiles
 */

/**
 * @brief  Constructs a new DescribeUserProfilesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserProfilesResponse::DescribeUserProfilesResponse(

/**
 * @brief  Constructs a new DescribeUserProfilesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUserProfilesRequest::DescribeUserProfilesRequest(const DescribeUserProfilesRequest &other)
    : OpsWorksRequest(new DescribeUserProfilesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeUserProfilesRequest object.
 */
DescribeUserProfilesRequest::DescribeUserProfilesRequest()
    : OpsWorksRequest(new DescribeUserProfilesRequestPrivate(OpsWorksRequest::DescribeUserProfilesAction, this))
{

}

bool DescribeUserProfilesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeUserProfilesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUserProfilesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeUserProfilesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserProfilesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeUserProfilesRequestPrivate
 *
 * @brief  Private implementation for DescribeUserProfilesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserProfilesRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeUserProfilesRequest instance.
 */
DescribeUserProfilesRequestPrivate::DescribeUserProfilesRequestPrivate(
    const OpsWorksRequest::Action action, DescribeUserProfilesRequest * const q)
    : DescribeUserProfilesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserProfilesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserProfilesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUserProfilesRequest instance.
 */
DescribeUserProfilesRequestPrivate::DescribeUserProfilesRequestPrivate(
    const DescribeUserProfilesRequestPrivate &other, DescribeUserProfilesRequest * const q)
    : DescribeUserProfilesPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
