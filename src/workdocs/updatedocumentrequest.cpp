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

#include "updatedocumentrequest.h"
#include "updatedocumentrequest_p.h"
#include "updatedocumentresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  UpdateDocumentRequest
 *
 * @brief  Implements WorkDocs UpdateDocument requests.
 *
 * @see    WorkDocsClient::updateDocument
 */

/**
 * @brief  Constructs a new UpdateDocumentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDocumentResponse::UpdateDocumentResponse(

/**
 * @brief  Constructs a new UpdateDocumentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDocumentRequest::UpdateDocumentRequest(const UpdateDocumentRequest &other)
    : WorkDocsRequest(new UpdateDocumentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDocumentRequest object.
 */
UpdateDocumentRequest::UpdateDocumentRequest()
    : WorkDocsRequest(new UpdateDocumentRequestPrivate(WorkDocsRequest::UpdateDocumentAction, this))
{

}

bool UpdateDocumentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDocumentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDocumentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * UpdateDocumentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDocumentRequestPrivate
 *
 * @brief  Private implementation for UpdateDocumentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public UpdateDocumentRequest instance.
 */
UpdateDocumentRequestPrivate::UpdateDocumentRequestPrivate(
    const WorkDocsRequest::Action action, UpdateDocumentRequest * const q)
    : UpdateDocumentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDocumentRequest instance.
 */
UpdateDocumentRequestPrivate::UpdateDocumentRequestPrivate(
    const UpdateDocumentRequestPrivate &other, UpdateDocumentRequest * const q)
    : UpdateDocumentPrivate(other, q)
{

}
