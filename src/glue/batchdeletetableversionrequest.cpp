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

#include "batchdeletetableversionrequest.h"
#include "batchdeletetableversionrequest_p.h"
#include "batchdeletetableversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeleteTableVersionRequest
 *
 * \brief The BatchDeleteTableVersionRequest class encapsulates Glue BatchDeleteTableVersion requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchDeleteTableVersion
 */

/*!
 * @brief  Constructs a new BatchDeleteTableVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDeleteTableVersionRequest::BatchDeleteTableVersionRequest(const BatchDeleteTableVersionRequest &other)
    : GlueRequest(new BatchDeleteTableVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new BatchDeleteTableVersionRequest object.
 */
BatchDeleteTableVersionRequest::BatchDeleteTableVersionRequest()
    : GlueRequest(new BatchDeleteTableVersionRequestPrivate(GlueRequest::BatchDeleteTableVersionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteTableVersionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an BatchDeleteTableVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDeleteTableVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteTableVersionRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteTableVersionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  BatchDeleteTableVersionRequestPrivate
 *
 * @brief  Private implementation for BatchDeleteTableVersionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new BatchDeleteTableVersionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public BatchDeleteTableVersionRequest instance.
 */
BatchDeleteTableVersionRequestPrivate::BatchDeleteTableVersionRequestPrivate(
    const GlueRequest::Action action, BatchDeleteTableVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new BatchDeleteTableVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteTableVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDeleteTableVersionRequest instance.
 */
BatchDeleteTableVersionRequestPrivate::BatchDeleteTableVersionRequestPrivate(
    const BatchDeleteTableVersionRequestPrivate &other, BatchDeleteTableVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
