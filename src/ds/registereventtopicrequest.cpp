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

#include "registereventtopicrequest.h"
#include "registereventtopicrequest_p.h"
#include "registereventtopicresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  RegisterEventTopicRequest
 *
 * @brief  Implements DirectoryService RegisterEventTopic requests.
 *
 * @see    DirectoryServiceClient::registerEventTopic
 */

/**
 * @brief  Constructs a new RegisterEventTopicResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterEventTopicResponse::RegisterEventTopicResponse(

/**
 * @brief  Constructs a new RegisterEventTopicRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterEventTopicRequest::RegisterEventTopicRequest(const RegisterEventTopicRequest &other)
    : DirectoryServiceRequest(new RegisterEventTopicRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterEventTopicRequest object.
 */
RegisterEventTopicRequest::RegisterEventTopicRequest()
    : DirectoryServiceRequest(new RegisterEventTopicRequestPrivate(DirectoryServiceRequest::RegisterEventTopicAction, this))
{

}

bool RegisterEventTopicRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterEventTopicResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterEventTopicResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * RegisterEventTopicRequest::response(QNetworkReply * const reply) const
{
    return new RegisterEventTopicResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterEventTopicRequestPrivate
 *
 * @brief  Private implementation for RegisterEventTopicRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterEventTopicRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public RegisterEventTopicRequest instance.
 */
RegisterEventTopicRequestPrivate::RegisterEventTopicRequestPrivate(
    const DirectoryServiceRequest::Action action, RegisterEventTopicRequest * const q)
    : RegisterEventTopicPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterEventTopicRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterEventTopicRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterEventTopicRequest instance.
 */
RegisterEventTopicRequestPrivate::RegisterEventTopicRequestPrivate(
    const RegisterEventTopicRequestPrivate &other, RegisterEventTopicRequest * const q)
    : RegisterEventTopicPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
