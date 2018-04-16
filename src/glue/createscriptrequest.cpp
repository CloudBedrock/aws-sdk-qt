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

#include "createscriptrequest.h"
#include "createscriptrequest_p.h"
#include "createscriptresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateScriptRequest
 *
 * \brief The CreateScriptRequest class encapsulates Glue CreateScript requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createScript
 */

/*!
 * @brief  Constructs a new CreateScriptRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateScriptRequest::CreateScriptRequest(const CreateScriptRequest &other)
    : GlueRequest(new CreateScriptRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateScriptRequest object.
 */
CreateScriptRequest::CreateScriptRequest()
    : GlueRequest(new CreateScriptRequestPrivate(GlueRequest::CreateScriptAction, this))
{

}

/*!
 * \reimp
 */
bool CreateScriptRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateScriptResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateScriptResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateScriptRequest::response(QNetworkReply * const reply) const
{
    return new CreateScriptResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateScriptRequestPrivate
 *
 * @brief  Private implementation for CreateScriptRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateScriptRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public CreateScriptRequest instance.
 */
CreateScriptRequestPrivate::CreateScriptRequestPrivate(
    const GlueRequest::Action action, CreateScriptRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateScriptRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateScriptRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateScriptRequest instance.
 */
CreateScriptRequestPrivate::CreateScriptRequestPrivate(
    const CreateScriptRequestPrivate &other, CreateScriptRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
