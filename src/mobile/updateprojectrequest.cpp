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

#include "updateprojectrequest.h"
#include "updateprojectrequest_p.h"
#include "updateprojectresponse.h"
#include "mobilerequest_p.h"

namespace AWS {
namespace Mobile {

/**
 * @class  UpdateProjectRequest
 *
 * @brief  Implements Mobile UpdateProject requests.
 *
 * @see    MobileClient::updateProject
 */

/**
 * @brief  Constructs a new UpdateProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateProjectResponse::UpdateProjectResponse(

/**
 * @brief  Constructs a new UpdateProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateProjectRequest::UpdateProjectRequest(const UpdateProjectRequest &other)
    : MobileRequest(new UpdateProjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateProjectRequest object.
 */
UpdateProjectRequest::UpdateProjectRequest()
    : MobileRequest(new UpdateProjectRequestPrivate(MobileRequest::UpdateProjectAction, this))
{

}

bool UpdateProjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateProjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MobileClient::send
 */
AwsAbstractResponse * UpdateProjectRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateProjectRequestPrivate
 *
 * @brief  Private implementation for UpdateProjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProjectRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public UpdateProjectRequest instance.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const MobileRequest::Action action, UpdateProjectRequest * const q)
    : UpdateProjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateProjectRequest instance.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const UpdateProjectRequestPrivate &other, UpdateProjectRequest * const q)
    : UpdateProjectPrivate(other, q)
{

}
