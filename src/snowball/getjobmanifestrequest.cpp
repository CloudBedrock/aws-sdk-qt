/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getjobmanifestrequest.h"
#include "getjobmanifestrequest_p.h"
#include "getjobmanifestresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/**
 * @class  GetJobManifestRequest
 *
 * @brief  Implements Snowball GetJobManifest requests.
 *
 * @see    SnowballClient::getJobManifest
 */

/**
 * @brief  Constructs a new GetJobManifestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobManifestRequest::GetJobManifestRequest(const GetJobManifestRequest &other)
    : SnowballRequest(new GetJobManifestRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobManifestRequest object.
 */
GetJobManifestRequest::GetJobManifestRequest()
    : SnowballRequest(new GetJobManifestRequestPrivate(SnowballRequest::GetJobManifestAction, this))
{

}

bool GetJobManifestRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobManifestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobManifestResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * GetJobManifestRequest::response(QNetworkReply * const reply) const
{
    return new GetJobManifestResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobManifestRequestPrivate
 *
 * @brief  Private implementation for GetJobManifestRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobManifestRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public GetJobManifestRequest instance.
 */
GetJobManifestRequestPrivate::GetJobManifestRequestPrivate(
    const SnowballRequest::Action action, GetJobManifestRequest * const q)
    : GetJobManifestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobManifestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobManifestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobManifestRequest instance.
 */
GetJobManifestRequestPrivate::GetJobManifestRequestPrivate(
    const GetJobManifestRequestPrivate &other, GetJobManifestRequest * const q)
    : GetJobManifestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
