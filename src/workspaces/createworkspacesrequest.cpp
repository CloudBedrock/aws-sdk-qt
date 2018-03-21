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

#include "createworkspacesrequest.h"
#include "createworkspacesrequest_p.h"
#include "createworkspacesresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  CreateWorkspacesRequest
 *
 * @brief  Implements WorkSpaces CreateWorkspaces requests.
 *
 * @see    WorkSpacesClient::createWorkspaces
 */

/**
 * @brief  Constructs a new CreateWorkspacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateWorkspacesResponse::CreateWorkspacesResponse(

/**
 * @brief  Constructs a new CreateWorkspacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateWorkspacesRequest::CreateWorkspacesRequest(const CreateWorkspacesRequest &other)
    : WorkSpacesRequest(new CreateWorkspacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateWorkspacesRequest object.
 */
CreateWorkspacesRequest::CreateWorkspacesRequest()
    : WorkSpacesRequest(new CreateWorkspacesRequestPrivate(WorkSpacesRequest::CreateWorkspacesAction, this))
{

}

bool CreateWorkspacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateWorkspacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateWorkspacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * CreateWorkspacesRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkspacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateWorkspacesRequestPrivate
 *
 * @brief  Private implementation for CreateWorkspacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateWorkspacesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public CreateWorkspacesRequest instance.
 */
CreateWorkspacesRequestPrivate::CreateWorkspacesRequestPrivate(
    const WorkSpacesRequest::Action action, CreateWorkspacesRequest * const q)
    : CreateWorkspacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateWorkspacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkspacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateWorkspacesRequest instance.
 */
CreateWorkspacesRequestPrivate::CreateWorkspacesRequestPrivate(
    const CreateWorkspacesRequestPrivate &other, CreateWorkspacesRequest * const q)
    : CreateWorkspacesPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace AWS
