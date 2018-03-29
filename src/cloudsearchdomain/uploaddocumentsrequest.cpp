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

#include "uploaddocumentsrequest.h"
#include "uploaddocumentsrequest_p.h"
#include "uploaddocumentsresponse.h"
#include "cloudsearchdomainrequest_p.h"

namespace QtAws {
namespace CloudSearchDomain {

/**
 * @class  UploadDocumentsRequest
 *
 * @brief  Implements CloudSearchDomain UploadDocuments requests.
 *
 * @see    CloudSearchDomainClient::uploadDocuments
 */

/**
 * @brief  Constructs a new UploadDocumentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UploadDocumentsRequest::UploadDocumentsRequest(const UploadDocumentsRequest &other)
    : CloudSearchDomainRequest(new UploadDocumentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UploadDocumentsRequest object.
 */
UploadDocumentsRequest::UploadDocumentsRequest()
    : CloudSearchDomainRequest(new UploadDocumentsRequestPrivate(CloudSearchDomainRequest::UploadDocumentsAction, this))
{

}

bool UploadDocumentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UploadDocumentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UploadDocumentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudSearchDomainClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadDocumentsRequest::response(QNetworkReply * const reply) const
{
    return new UploadDocumentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UploadDocumentsRequestPrivate
 *
 * @brief  Private implementation for UploadDocumentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadDocumentsRequestPrivate object.
 *
 * @param  action  CloudSearchDomain action being performed.
 * @param  q       Pointer to this object's public UploadDocumentsRequest instance.
 */
UploadDocumentsRequestPrivate::UploadDocumentsRequestPrivate(
    const CloudSearchDomainRequest::Action action, UploadDocumentsRequest * const q)
    : CloudSearchDomainRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UploadDocumentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UploadDocumentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UploadDocumentsRequest instance.
 */
UploadDocumentsRequestPrivate::UploadDocumentsRequestPrivate(
    const UploadDocumentsRequestPrivate &other, UploadDocumentsRequest * const q)
    : CloudSearchDomainRequestPrivate(other, q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
