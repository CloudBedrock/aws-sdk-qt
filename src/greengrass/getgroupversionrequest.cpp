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

#include "getgroupversionrequest.h"
#include "getgroupversionrequest_p.h"
#include "getgroupversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetGroupVersionRequest
 *
 * @brief  Implements Greengrass GetGroupVersion requests.
 *
 * @see    GreengrassClient::getGroupVersion
 */

/**
 * @brief  Constructs a new GetGroupVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupVersionResponse::GetGroupVersionResponse(

/**
 * @brief  Constructs a new GetGroupVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGroupVersionRequest::GetGroupVersionRequest(const GetGroupVersionRequest &other)
    : GreengrassRequest(new GetGroupVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGroupVersionRequest object.
 */
GetGroupVersionRequest::GetGroupVersionRequest()
    : GreengrassRequest(new GetGroupVersionRequestPrivate(GreengrassRequest::GetGroupVersionAction, this))
{

}

bool GetGroupVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGroupVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGroupVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetGroupVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGroupVersionRequestPrivate
 *
 * @brief  Private implementation for GetGroupVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetGroupVersionRequest instance.
 */
GetGroupVersionRequestPrivate::GetGroupVersionRequestPrivate(
    const GreengrassRequest::Action action, GetGroupVersionRequest * const q)
    : GetGroupVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGroupVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGroupVersionRequest instance.
 */
GetGroupVersionRequestPrivate::GetGroupVersionRequestPrivate(
    const GetGroupVersionRequestPrivate &other, GetGroupVersionRequest * const q)
    : GetGroupVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
