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

#include "getdevicedefinitionversionrequest.h"
#include "getdevicedefinitionversionrequest_p.h"
#include "getdevicedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetDeviceDefinitionVersionRequest
 *
 * @brief  Implements Greengrass GetDeviceDefinitionVersion requests.
 *
 * @see    GreengrassClient::getDeviceDefinitionVersion
 */

/**
 * @brief  Constructs a new GetDeviceDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeviceDefinitionVersionResponse::GetDeviceDefinitionVersionResponse(

/**
 * @brief  Constructs a new GetDeviceDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeviceDefinitionVersionRequest::GetDeviceDefinitionVersionRequest(const GetDeviceDefinitionVersionRequest &other)
    : GreengrassRequest(new GetDeviceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeviceDefinitionVersionRequest object.
 */
GetDeviceDefinitionVersionRequest::GetDeviceDefinitionVersionRequest()
    : GreengrassRequest(new GetDeviceDefinitionVersionRequestPrivate(GreengrassRequest::GetDeviceDefinitionVersionAction, this))
{

}

bool GetDeviceDefinitionVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeviceDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeviceDefinitionVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetDeviceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceDefinitionVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeviceDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for GetDeviceDefinitionVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetDeviceDefinitionVersionRequest instance.
 */
GetDeviceDefinitionVersionRequestPrivate::GetDeviceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetDeviceDefinitionVersionRequest * const q)
    : GetDeviceDefinitionVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeviceDefinitionVersionRequest instance.
 */
GetDeviceDefinitionVersionRequestPrivate::GetDeviceDefinitionVersionRequestPrivate(
    const GetDeviceDefinitionVersionRequestPrivate &other, GetDeviceDefinitionVersionRequest * const q)
    : GetDeviceDefinitionVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
