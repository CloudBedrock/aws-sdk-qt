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

#include "deletedestinationrequest.h"
#include "deletedestinationrequest_p.h"
#include "deletedestinationresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteDestinationRequest
 *
 * @brief  Implements CloudWatchLogs DeleteDestination requests.
 *
 * @see    CloudWatchLogsClient::deleteDestination
 */

/**
 * @brief  Constructs a new DeleteDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDestinationResponse::DeleteDestinationResponse(

/**
 * @brief  Constructs a new DeleteDestinationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDestinationRequest::DeleteDestinationRequest(const DeleteDestinationRequest &other)
    : CloudWatchLogsRequest(new DeleteDestinationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDestinationRequest object.
 */
DeleteDestinationRequest::DeleteDestinationRequest()
    : CloudWatchLogsRequest(new DeleteDestinationRequestPrivate(CloudWatchLogsRequest::DeleteDestinationAction, this))
{

}

bool DeleteDestinationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDestinationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDestinationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DeleteDestinationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDestinationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDestinationRequestPrivate
 *
 * @brief  Private implementation for DeleteDestinationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDestinationRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DeleteDestinationRequest instance.
 */
DeleteDestinationRequestPrivate::DeleteDestinationRequestPrivate(
    const CloudWatchLogsRequest::Action action, DeleteDestinationRequest * const q)
    : DeleteDestinationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDestinationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDestinationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDestinationRequest instance.
 */
DeleteDestinationRequestPrivate::DeleteDestinationRequestPrivate(
    const DeleteDestinationRequestPrivate &other, DeleteDestinationRequest * const q)
    : DeleteDestinationPrivate(other, q)
{

}
