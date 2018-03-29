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

#include "createfacetrequest.h"
#include "createfacetrequest_p.h"
#include "createfacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  CreateFacetRequest
 *
 * @brief  Implements CloudDirectory CreateFacet requests.
 *
 * @see    CloudDirectoryClient::createFacet
 */

/**
 * @brief  Constructs a new CreateFacetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFacetRequest::CreateFacetRequest(const CreateFacetRequest &other)
    : CloudDirectoryRequest(new CreateFacetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFacetRequest object.
 */
CreateFacetRequest::CreateFacetRequest()
    : CloudDirectoryRequest(new CreateFacetRequestPrivate(CloudDirectoryRequest::CreateFacetAction, this))
{

}

bool CreateFacetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFacetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFacetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFacetRequest::response(QNetworkReply * const reply) const
{
    return new CreateFacetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFacetRequestPrivate
 *
 * @brief  Private implementation for CreateFacetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFacetRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public CreateFacetRequest instance.
 */
CreateFacetRequestPrivate::CreateFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateFacetRequest * const q)
    : CreateFacetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFacetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFacetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFacetRequest instance.
 */
CreateFacetRequestPrivate::CreateFacetRequestPrivate(
    const CreateFacetRequestPrivate &other, CreateFacetRequest * const q)
    : CreateFacetPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
