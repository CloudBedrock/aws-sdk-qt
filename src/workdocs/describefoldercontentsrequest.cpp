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

#include "describefoldercontentsrequest.h"
#include "describefoldercontentsrequest_p.h"
#include "describefoldercontentsresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeFolderContentsRequest
 *
 * @brief  Implements WorkDocs DescribeFolderContents requests.
 *
 * @see    WorkDocsClient::describeFolderContents
 */

/**
 * @brief  Constructs a new DescribeFolderContentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFolderContentsRequest::DescribeFolderContentsRequest(const DescribeFolderContentsRequest &other)
    : WorkDocsRequest(new DescribeFolderContentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFolderContentsRequest object.
 */
DescribeFolderContentsRequest::DescribeFolderContentsRequest()
    : WorkDocsRequest(new DescribeFolderContentsRequestPrivate(WorkDocsRequest::DescribeFolderContentsAction, this))
{

}

bool DescribeFolderContentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFolderContentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFolderContentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFolderContentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFolderContentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFolderContentsRequestPrivate
 *
 * @brief  Private implementation for DescribeFolderContentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFolderContentsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DescribeFolderContentsRequest instance.
 */
DescribeFolderContentsRequestPrivate::DescribeFolderContentsRequestPrivate(
    const WorkDocsRequest::Action action, DescribeFolderContentsRequest * const q)
    : WorkDocsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFolderContentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFolderContentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFolderContentsRequest instance.
 */
DescribeFolderContentsRequestPrivate::DescribeFolderContentsRequestPrivate(
    const DescribeFolderContentsRequestPrivate &other, DescribeFolderContentsRequest * const q)
    : WorkDocsRequestPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
